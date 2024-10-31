class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        auto end_it = std::unique(nums.begin(), nums.end());
        nums.erase(end_it, nums.end());

        return nums.size();
    }
};
