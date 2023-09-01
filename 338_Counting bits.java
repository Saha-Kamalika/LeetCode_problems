class Solution {
    public int[] countBits(int n) {
        int[] list=new int[n+1];
        for(int i=0;i<=n;i++){
            int tot=0,num=i;
            while(num!=0){
                tot+=num%2;
                num/=2;
            }
            list[i]=tot;
        }
        return list;
    }
}
