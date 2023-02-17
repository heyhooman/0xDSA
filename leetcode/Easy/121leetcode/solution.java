class Solution {
    public int maxProfit(int[] prices) {
         int buy = Integer.MAX_VALUE;
        int sell = 0;
        for(int i = 0; i < prices.length; i++){
            buy = Math.min(prices[i], buy);
            sell = Math.max(prices[i]-buy, sell);
        }
        return sell;
    }

    // private int helper(int[] prices, int index){
    //     if(index < 0) return 0;
    //     int maxProfit = helper(prices, index-1); 
    //     int profit = 0;
    //     for(int i = index; i < prices.length; i++){
    //         if(prices[i] > prices[index]) profit = prices[i] - prices[index];
    //         maxProfit = Math.max(maxProfit, profit);
    //     }
    //     return maxProfit;
    // }
}