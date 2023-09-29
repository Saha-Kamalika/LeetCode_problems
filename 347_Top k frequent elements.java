class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer, Integer> map=new HashMap<Integer,Integer>();
        for(int e: nums){
            map.put(e,map.getOrDefault(e,0)+1);
        }
        PriorityQueue<Integer> q=new PriorityQueue<Integer>(new Comparator<Integer>(){
            public int compare(Integer n1,Integer n2){
                return map.get(n2)-map.get(n1);
            }
        });
        int[] res=new int[k];
        for(int e: map.keySet()) q.add(e);
        for(int i=0;i<k;i++) res[i]=q.poll();
        return res;
    }
}
