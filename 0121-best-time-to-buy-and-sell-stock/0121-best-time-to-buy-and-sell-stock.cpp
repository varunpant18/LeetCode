class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        
        for (int i = 0; i < prices.size(); ++i) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];  // Update the lowest price
            } else if (prices[i] - minPrice > maxProfit) {
                maxProfit = prices[i] - minPrice;  // Update the max profit
            }
        }
        
        return maxProfit;
    }
};
