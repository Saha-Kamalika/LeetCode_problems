class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> v;
        for(int i=0;i<nums.size();i++){
            v[nums[i]].push_back(i);
        }
        for(auto& e: v){
            if(e.second.size()>=2){
                vector<int>& ve=e.second;
                for(int i=1;i<ve.size();i++){
                    if(abs(ve[i]-ve[i-1])<=k) return true;
                }
            }
        }
        return false;
    }
};
