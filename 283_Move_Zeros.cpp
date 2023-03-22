class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero=0,j=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]==0)
                zero++;
        for(int i=0;i<nums.size();i++)
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        while(zero--){
            nums[j]=0;
            j++;
        }
    }
};
