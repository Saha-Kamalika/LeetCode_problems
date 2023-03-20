class Solution {
public:
    bool isHappy(int n) {
    set<int> s;
    int d=0;
    while(1){
        int sum=0;
        while(n){
            d=n%10;
            sum+=d*d;
            n/=10;
        }   
        if(sum==1)
            return true;
        if(s.find(sum)!=s.end())
            return false;
        s.insert(sum);
        n=sum;
    }
    }
};
/*
>> A happy number is a number defined by the following process:
. Starting with any positive integer, replace the number by the sum of the squares of its digits.
. Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
. Those numbers for which this process ends in 1 are happy.
*/
