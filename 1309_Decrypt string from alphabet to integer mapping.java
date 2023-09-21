class Solution {
    public String freqAlphabets(String s) {
        StringBuilder ans=new StringBuilder();
        int i=0;
        while(i<s.length()){
            if((i+2)<s.length() && s.charAt(i+2)=='#'){
                int temp=Integer.parseInt(s.substring(i,i+2));
                ans.append((char)('j'+temp-10));
                i+=3;
            }
            else{
                int temp=s.charAt(i)-'0';
                ans.append((char)('a'+temp-1));
                i++;
            }
        }
        return ans.toString();
    }
}
