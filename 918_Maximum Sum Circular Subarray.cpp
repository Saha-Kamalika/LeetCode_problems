class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int tsum=0, minSumPrev=0, maxSumPrev=0, maxSum=INT_MIN, minSum=INT_MAX;
        for(int e: nums){
            tsum+=e;
            maxSumPrev= max(maxSumPrev+e, e);
            maxSum= max(maxSumPrev, maxSum);
            minSumPrev= min(minSumPrev+e, e);
            minSum= min(minSumPrev, minSum);
        }
        if(maxSum>0) return max(maxSum, tsum-minSum);
        return maxSum;
    }
};
