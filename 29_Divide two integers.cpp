class Solution {
public:
    int divide(int dividend, int divisor) {
        int result;
        if (dividend >= INT_MAX && divisor == 1) result = INT_MAX;
        else if(dividend <= INT_MIN && divisor == 1) result = INT_MIN;
        else if(dividend <= INT_MIN && divisor == -1) result = abs(INT_MAX);
        else result  = dividend / divisor;
    	return result;
    }
};
