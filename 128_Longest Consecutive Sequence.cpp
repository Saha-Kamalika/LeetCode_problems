class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int length=1, mx=1;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]==1) {
                length++;
                mx= max(mx, length);
            }
            else if(nums[i+1]-nums[i]>1){
                mx= max(mx, length);
                length=1;
            }
            else continue;
        }
        return mx;
    }
};
