class Solution {
public:
    bool canJump(std::vector<int>& nums) { // [2,3,1,1,4]
        int maxReach = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > maxReach) {
                return false;
            }
            maxReach = std::max(maxReach, i + nums[i]);
            if (maxReach >= nums.size() - 1) {
                return true;
            }
        }
        return false;
    }
};