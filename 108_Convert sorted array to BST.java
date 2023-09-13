class Solution {
    public TreeNode sortedArrayToBST(int[] nums) {
        if(nums.length==0) return null;
        return findBST(nums,0,nums.length-1);
    }
    public TreeNode findBST(int[] nums,int l,int h){
        if(l>h) return null;
        int mid=(l+h)/2;
        TreeNode curr=new TreeNode(nums[mid]);
        curr.left=findBST(nums,l,mid-1);
        curr.right=findBST(nums,mid+1,h);
        return curr;
    }
}
