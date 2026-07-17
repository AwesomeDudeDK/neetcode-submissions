class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            std::span<int> buy(prices.begin(), prices.begin() + i);
            maxProfit = std::max(prices[i] - std::ranges::min(buy), maxProfit);
        }
        return maxProfit;
    }
};
