class Solution {
    public int totalHammingDistance(int[] nums) {
        if(nums==null) return 0;
        int ans=0;
        for (int i=0;i<32;i++){
            int one=0;
            for (int j=0;j<nums.length;j++){
                one+=(nums[j]>>i) & 1;
            }
            ans+= one*(nums.length-one);
        }
        return ans;
    }
}
