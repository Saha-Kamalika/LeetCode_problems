class Solution {
    public String decodeAtIndex(String s, int k) {
        int len=s.length();
        long nlen=0;
        for(int i=0;i<len;i++){
            if(Character.isDigit(s.charAt(i))) nlen*=s.charAt(i)-'0';
            else nlen++;
        }
        for(int i=len-1;i>=0;i--){
            k%=nlen;
            if(k==0 &&  Character.isLetter(s.charAt(i))) return String.valueOf(s.charAt(i));
            if(Character.isDigit(s.charAt(i))) nlen/=s.charAt(i)-'0';
            else nlen--;
        }
        return null;
    }
}
