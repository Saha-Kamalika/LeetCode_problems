class Solution {
    public boolean backspaceCompare(String s, String t) {
        Stack<Character> s1=new Stack<>();
        Stack<Character> s2=new Stack<>();
        char[] c1=s.toCharArray();
        char[] t1=t.toCharArray(); 
        for(Character c: c1){
            if(c!='#') s1.push(c);
            else{
                if(!s1.isEmpty()) s1.pop();
            }
        }
        for(Character c: t1){
            if(c!='#') s2.push(c);
            else{
                if(!s2.isEmpty()) s2.pop();
            }
        }
        while(!s1.isEmpty() && !s2.isEmpty()){
            char c=s1.peek();
            char k=s2.peek();
            s1.pop();
            s2.pop();
            if(c!=k)
                return false;
        }
        if(!s1.isEmpty() || !s2.isEmpty())
            return false;
        return true;
    }
}
