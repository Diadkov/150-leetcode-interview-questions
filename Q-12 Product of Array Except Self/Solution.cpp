class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums)
    {
        std::vector<int> prod(nums.size(), 1);

        for (int i = 1; i < nums.size(); ++i)
            prod[i] = prod[i - 1] * nums[i - 1];

        int suffixProd = 1;
        for (int i = nums.size() - 1; i >= 0; --i)
        {
            prod[i] *= suffixProd;
            suffixProd *= nums[i];

        }

        return prod;
    }
};