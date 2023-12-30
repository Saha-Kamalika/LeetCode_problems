class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //1
        /*int ans=0;
        int bits[32]={0};
        for(int i=0;i<32;i++){
            for(int n: nums){
                bits[i]+=n>>i & 1;
                bits[i]%=3;
            }
        }
        for(int i=0;i<32;i++){
            ans|=bits[i] << i;
        }
        return ans;*/
        //2
        int ones=0, twos=0, thrice=0;
        for(int n: nums){
            twos|= (ones & n);
            ones^= n;
            thrice= (ones & twos);
            ones&= (~thrice);
            twos&= (~thrice);
        }
        return ones;
    }
};
