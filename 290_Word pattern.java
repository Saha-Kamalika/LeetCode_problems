class Solution {
    public boolean wordPattern(String pattern, String s) {
        String[] w=s.split(" ");
        if(w.length!=pattern.length()) return false;
        HashMap<String,Character> sc=new HashMap<>();
        HashMap<Character,String> cs=new HashMap<>();
        for(int i=0;i<pattern.length();i++){
            char c=pattern.charAt(i);
            String w1=w[i];
            if(!cs.containsKey(c)) cs.put(c,w1);
            if(!sc.containsKey(w1)) sc.put(w1,c);
            if(!sc.get(w1).equals(c) || !cs.get(c).equals(w1)) return false;
        }
        return true;
    }
}
