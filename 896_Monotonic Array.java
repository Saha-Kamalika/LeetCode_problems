class Solution {
    public boolean isMonotonic(int[] nums) {
        return monInc(nums) || monDec(nums);
    }
    public boolean monInc(int[] nums){
        for(int i=1;i<nums.length;i++)
            if(nums[i]<nums[i-1]) return false;
        return true;
    }
    public boolean monDec(int[] nums){
        for(int i=1;i<nums.length;i++)
            if(nums[i]>nums[i-1]) return false;
        return true;
    }
}
