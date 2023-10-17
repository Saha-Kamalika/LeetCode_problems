class Solution {
    public static int digSum(int num)
    {
        int sum=0;
        while(num>0)
        {
            sum=sum+(num%10);
            num/=10;
        }
        return sum;
    }
    public int differenceOfSum(int[] nums) {
        int elSum =0, digitSum=0;

        for(int i=0;i<nums.length;i++)
        {   
            int num=nums[i];
            elSum+=nums[i]; 
            digitSum+=Solution.digSum(num);
        }
        return Math.abs(elSum-digitSum);
    }
}
