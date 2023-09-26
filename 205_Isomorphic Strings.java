class Solution {
    public boolean isIsomorphic(String s, String t) {
        int freq1[]=new int[128];
        int freq2[]=new int[128];
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            if(freq1[s.charAt(i)]!=freq2[t.charAt(i)]) return false;  //freq of the letters not same
            freq1[s.charAt(i)]=i+1;   //increments the freq by 1 
            freq2[t.charAt(i)]=i+1;
        }
        return true;
    }
}
