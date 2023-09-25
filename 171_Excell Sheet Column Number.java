class Solution {
    public int titleToNumber(String columnTitle) {
        int res=0,len=columnTitle.length();
        for(int i=0;i<=len-1;i++){
            res+=Math.pow(26,len-1-i)*(columnTitle.charAt(i)-64);
        }
        return res;
    }
}
