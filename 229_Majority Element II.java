class Solution {
    public List<Integer> majorityElement(int[] nums) {
        HashMap<Integer,Integer> map=new HashMap<>();
        List<Integer> list=new ArrayList<>();
        int len=nums.length;
        for(int e: nums) map.put(e,map.getOrDefault(e,0)+1);
        for(Integer key: map.keySet()){
            if(map.get(key)>len/3) list.add(key);
        }
        return list;
    }
}
