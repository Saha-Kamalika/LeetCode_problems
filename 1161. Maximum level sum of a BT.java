/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int maxLevelSum(TreeNode root) {
        Queue<TreeNode> q=new LinkedList<>();
        if(root==null) return 0;
        q.add(root);
        int ans=1;
        int maxSum=Integer.MIN_VALUE;
        int level=0;
        while(!q.isEmpty()){
            int size=q.size();
            int sum=0;
            level++;
            for(int i=0;i<size;i++){
                TreeNode curr=q.peek();
                sum+=curr.val;
                if(curr.left!=null) q.add(curr.left);
                if(curr.right!=null) q.add(curr.right);
                q.remove();
            }
            if(sum>maxSum){
                maxSum=sum;
                ans=level;
            }
        }
        return ans;
    }
}
