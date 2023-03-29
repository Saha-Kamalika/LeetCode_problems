class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size()<=1)
            return {nums};
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++){
            vector<int> v(nums.begin(),nums.end());
            v.erase(v.begin()+i);
            auto r=permute(v);

            for(int j=0;j<r.size();j++){
                vector<int> _v=r[j];
                _v.insert(_v.begin(),nums[i]);
                res.push_back(_v);
            }
        }
        return res;
    }
};
