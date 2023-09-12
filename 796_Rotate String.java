class Solution {
    public boolean rotateString(String s, String goal) {
        String ns=s+s;
        if(s.length()!=goal.length()) return false;
        return ns.indexOf(goal)>=0;
    }
}
