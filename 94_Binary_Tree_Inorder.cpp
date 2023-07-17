class Solution {
    vector<int>a;
public:
    void inorder(TreeNode* &root){
    if(!root) return;
        inorder(root->left);
        a.push_back(root->val);
        inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return a;
    }
};
