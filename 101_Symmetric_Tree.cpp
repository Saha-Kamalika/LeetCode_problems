/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution  {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return checkMirror(root->left,root->right);
    }
    bool checkMirror(TreeNode* n1,TreeNode* n2){
        if(n1==NULL || n2==NULL)
            return (n1==n2);
        if(n1->val!=n2->val)
            return false;
        return (checkMirror(n1->left,n2->right) && checkMirror(n1->right,n2->left));
    }
};
