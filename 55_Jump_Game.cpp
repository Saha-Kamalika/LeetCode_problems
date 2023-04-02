class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]+i>max)
                max=nums[i]+i;  //update the max reachable index
            if(max==i) //cannot reach till end
                 break;
        }
        return max>=nums.size()-1;
    }
};
