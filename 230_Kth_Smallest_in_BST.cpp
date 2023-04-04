class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int count=0,result=0;
        kthInorder(root,k,count,result);
        return result;
    }
    void kthInorder(TreeNode* root,int k,int& count, int& result){
        if(root->left)
            kthInorder(root->left,k,count,result);
        count++;
        if(count==k){
            result=root->val;
            return;
        }
        if(root->right)
            kthInorder(root->right,k,count,result);
    }
};
