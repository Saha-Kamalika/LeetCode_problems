class Solution {
    public int numIdenticalPairs(int[] nums) {
        HashMap<Integer,Integer> num=new HashMap<>();
        int ans=0;
        for(int e:nums) {
            num.put(e,num.getOrDefault(e,0)+1);
            ans+=num.get(e)-1;
        }
        return ans;
    }
}
