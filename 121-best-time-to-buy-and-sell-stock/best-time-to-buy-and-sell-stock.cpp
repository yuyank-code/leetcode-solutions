class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        int maxSell = prices[n - 1];
        int maxProfit = 0;

        for(int i = n - 2; i >= 0; i--) {

            maxSell = max(maxSell, prices[i + 1]);

            int profit = maxSell - prices[i];

            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};