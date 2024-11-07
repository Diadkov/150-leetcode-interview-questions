class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int cand = 0, n = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (n == 0) cand = nums[i];
            if(cand == nums[i]) ++n;
            else --n;
        }
        return cand;
    }
};