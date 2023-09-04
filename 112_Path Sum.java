class Solution {
    public boolean hasPathSum(TreeNode root, int targetSum) {
        if(root==null) return false;
        if(root.left==null && root.right==null){
            if(targetSum==root.val) return true;
            else return false;
        }
        boolean ls=hasPathSum(root.left,targetSum-root.val);
        boolean rs=hasPathSum(root.right,targetSum-root.val);
        return (ls||rs);
    }
}
