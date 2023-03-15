class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int smax=nums[0],sumCurr=nums[0];
        if(nums.size()==0)
            return 0;
        for(int i=1;i<nums.size();i++){
            sumCurr=max((sumCurr+nums[i]),nums[i]);
            smax=max(sumCurr,smax);
        }
        return smax;
    }
};
