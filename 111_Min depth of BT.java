class Solution {
    public int minDepth(TreeNode root) {
        if(root==null) return 0;
        int ld=minDepth(root.left);
        int rd=minDepth(root.right);
        if(ld==0 || rd==0) return Math.max(ld,rd)+1;
        return Math.min(ld,rd)+1;
    } 
}
