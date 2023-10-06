class Solution {
    public int integerBreak(int n) {
        int pro=1;
        if(n==2) return 1;
        if(n==3) return 2;
        while(n>4){
            pro*=3;
            n-=3;
        }
        pro*=n;
        return pro;
    }
}
