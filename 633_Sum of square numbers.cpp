class Solution {
public:
    bool judgeSquareSum(int c) {
        int left=0;
        int right=(int)sqrt(c);
        while(left<=right) {
            long long curSum=(long long)left*left+(long long)right*right;
            if(curSum==c) return true;
            else if(curSum<c) left++;
            else right--;
        }
        return false;
    }
};
