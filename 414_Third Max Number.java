class Solution {
    public int thirdMax(int[] nums) {
        TreeSet<Integer> set=new TreeSet<>(Comparator.reverseOrder());
        for(int i=0;i<nums.length;i++){
            set.add(nums[i]);
        }
        if(set.size()<3) return set.first();
        set.remove(set.first());
        set.remove(set.first());
        return set.first();
    }
}
