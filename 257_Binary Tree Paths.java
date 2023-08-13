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
    public List<String> binaryTreePaths(TreeNode root) {
        List<String> list=new ArrayList<>();
        findPaths(root,list,"");
        for(int i = 0; i < list.size(); i++)
            list.set(i, list.get(i).substring(2));
        return list;
    }
    public void findPaths(TreeNode root,List<String> list,String path){
        if(root==null) return;
        if(root.left==null && root.right==null) list.add(path+"->"+root.val);
        path+="->"+root.val;
        findPaths(root.left,list,path);
        findPaths(root.right,list,path);
    }
}
