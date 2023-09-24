class Solution {
    public boolean isFascinating(int n) {
        String num=Integer.toString(n)+Integer.toString(n*2)+Integer.toString(n*3);
        if(check(num)) return true;
        return false;        
    }
    public boolean check(String num){
        HashSet<Character> hs=new HashSet<>();
        if(num.length()>9) return false;
        if(num.contains("0")) return false;
        for(int i=0;i<num.length();i++){
            char ch=num.charAt(i);
            if(hs.contains(ch)) return false;
            else hs.add(ch);
        }
        if(hs.size()==9) return true;
        return false;
    }
}
