class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int max=0,curr=0;
        for(int i=0;i<n;i++){
            int id=nums[i]%n;
            nums[id]+=n;
        }
        for(int i=0;i<n;i++){
            if(nums[i]>curr){ //the largest number will occur for max no of time
                curr=nums[i];
                max=i;
            }
            nums[i]%=n; //returns the original number
        }
        return max;
    }
};
