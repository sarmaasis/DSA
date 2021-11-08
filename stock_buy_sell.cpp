// Best Time to Buy and Sell Stock- Leetcode 121

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX, max_profit=0, profit=0;
        
        for(int i =0; i<prices.size(); i++){
            min_price = min(prices[i],min_price);
            profit = prices[i]-min_price;
            max_profit = max(max_profit,profit);
        }
        return max_profit;
    }
};
