class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> set1=new HashSet<>();
        Set<Integer> set2=new HashSet<>();
        for(int ele:nums1) set1.add(ele);
        for(int ele:nums2) set2.add(ele);
        ArrayList<Integer> list1=new ArrayList<>();
        ArrayList<Integer> list2=new ArrayList<>();
        for(Integer ele:set1) list1.add(ele);
        for(Integer ele:set2) list2.add(ele);
        list1.retainAll(list2);
        int[] arr = list1.stream().mapToInt(Integer::intValue).toArray();
        return arr;
    }
}
