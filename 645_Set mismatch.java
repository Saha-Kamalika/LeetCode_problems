class Solution {
    public int[] findErrorNums(int[] nums) {
        Map<Integer,Integer> map=new HashMap<>();
        int[] res=new int[2];
        int sum=0;
        for(int ele: nums) map.put(ele,map.getOrDefault(ele,0)+1);
        for(Map.Entry<Integer,Integer> entry: map.entrySet()){
            sum+=entry.getKey();
            if(entry.getValue()==2){
                res[0]=entry.getKey();
            }
        }
        res[1]=(nums.length*(nums.length+1)/2)-sum;
        return res;
    }
}
