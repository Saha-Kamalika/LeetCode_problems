class Solution {
    public int[] productExceptSelf(int[] nums) {
        int len=nums.length;
        int[] ans=new int[len];
        int[] p=new int[len];
        int[] s=new int[len];
        p[0]=1;
        s[len-1]=1;
        for(int i=1;i<len;i++) p[i]=p[i-1]*nums[i-1];
        for(int i=len-2;i>=0;i--) s[i]=s[i+1]*nums[i+1];
        for(int i=0;i<len;i++) ans[i]=p[i]*s[i];
        return ans;
    }
}
