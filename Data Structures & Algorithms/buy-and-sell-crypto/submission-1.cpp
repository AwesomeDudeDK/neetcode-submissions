class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 1) return 0;

        int maxProfit = 0;
        int l = 0; int r = l + 1;

        while (r < prices.size()) {
            maxProfit = std::max(maxProfit, prices[r] - prices[l]);
            if (prices[r] < prices[l]) l = r;
            r++;
        }
        return maxProfit;
    }
};
