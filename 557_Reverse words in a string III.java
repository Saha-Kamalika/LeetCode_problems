class Solution {
    public String reverseWords(String s) {
        String[] words=s.split(" ");
        StringBuilder ans=new StringBuilder();
        for(String w: words){
            StringBuilder rev=new StringBuilder(w);
            rev.reverse();
            ans.append(rev).append(" ");
        }
        return ans.toString().trim();
    }
}
