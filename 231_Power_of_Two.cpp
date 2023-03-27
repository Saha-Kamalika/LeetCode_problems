class Solution {
public:
    bool isPowerOfTwo(int n) {
        /*bitset<32> bits(n);
        cout<<bits.to_string()<<endl;
        return n>0 && bits.count()==1;*/
        return n>0 && (n&(n-1))==0;
    }
};
