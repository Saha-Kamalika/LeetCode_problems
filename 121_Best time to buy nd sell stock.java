class Solution {
    public int maxProfit(int[] prices) {
        int max=Integer.MAX_VALUE,maxP=0,profit=0;
        for(int i=0;i<prices.length;i++){
            if(prices[i]<max) max=prices[i];
            profit=prices[i]-max;
            if(maxP<profit) maxP=profit;
        }
        return maxP;
    }
}
