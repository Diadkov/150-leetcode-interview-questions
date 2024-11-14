#include <vector>
#include <iostream>
class Solution {
public:
    int maxProfit(const std::vector<int>& prices) {
        int totalProfit = 0;
        for (size_t i = 1; i < prices.size(); ++i) {
            if (prices[i] > prices[i - 1]) {
                totalProfit += prices[i] - prices[i - 1];
            }
        }
        return totalProfit;
    }
};