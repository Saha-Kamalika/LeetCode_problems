import java.math.BigInteger;
class Solution {
    public String kthLargestNumber(String[] nums, int k) {
        //ArrayList<BigInteger> list=new ArrayList<>();
        BigInteger n[]=new BigInteger[nums.length];
        for(int i=0;i<nums.length;i++){
            n[i]=new BigInteger(nums[i]);
        }
        Arrays.sort(n);
        BigInteger res= n[n.length-k];
        return res.toString();
    }
}
