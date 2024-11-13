#include <vector>
#include <iostream>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int minPrice = INT_MAX, maxProfit = 0;
        for (auto price = prices.begin(); price != prices.end(); ++price) {
            if (minPrice > *price) {
                minPrice = *price;
            }
            else if (*price - minPrice > maxProfit) {
                maxProfit = *price - minPrice;
            }
        }
        return maxProfit;
    }
};