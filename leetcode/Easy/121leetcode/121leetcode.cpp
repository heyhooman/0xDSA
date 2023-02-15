/* 121. Best Time to Buy and Sell Stock

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

*/
 class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = INT_MAX;
        int maximum_profit = 0;
        for(int i = 0; i < prices.size(); ++i){
            minimum = min(minimum, prices[i]);
            maximum_profit = max(maximum_profit, prices[i] - minimum);
        }
        return maximum_profit;
        }
};
