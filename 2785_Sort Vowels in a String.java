class Solution {
    public boolean check(char c){
        return (c=='A' || c=='a' || c=='E' || c=='e' || c=='I' || c=='i' || c=='O' || c=='o' || c=='U' || c=='u');
    }
    public String sortVowels(String s) {
        char[] ch=s.toCharArray();
        int count=0;
        ArrayList<Character> vow=new ArrayList<>();
        for(char c: ch){
            if(check(c)){
                count++;
                vow.add(c);
            }
        }
        Collections.sort(vow);
        if(count==0) return String.valueOf(ch);
        else{
            int j=0;
            for(int i=0;i<ch.length;i++){
                if(check(ch[i])) ch[i]=vow.get(j++);
            }
            return String.valueOf(ch);
        }
    }
}
