class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node) return nullptr;
        
        unordered_map<int, Node*> visited;
        return clone_node(node, visited);
    }
    Node* clone_node(Node* node, unordered_map<int, Node*>&visited){
        Node* nn=new Node(node->val);
        visited.insert({node->val, nn});

        for(Node* n: node->neighbors){
            auto it=visited.find(n->val);
            if(it==visited.end()){
                Node* cn=clone_node(n, visited);
                nn->neighbors.push_back(cn);
            }
            else{
                nn->neighbors.push_back(it->second);
            }
        }
        return nn;
    }
};
