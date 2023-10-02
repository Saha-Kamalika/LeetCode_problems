class Solution {
    public String frequencySort(String s) {
        HashMap<Character,Integer> map=new HashMap<>();
        char c[]=s.toCharArray();
        for(char e: c) map.put(e,map.getOrDefault(e,0)+1);

        List<Character> list=new ArrayList<>(map.keySet());
        list.sort((a,b)-> map.get(b)-map.get(a));

        StringBuilder res=new StringBuilder();
        for(char e: list){
            for(int i=0;i<map.get(e);i++) res.append(e);
        }
        return res.toString();
    }
}
