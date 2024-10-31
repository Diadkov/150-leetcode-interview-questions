class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        for (auto it = nums.begin(); it != nums.end(); ++it) {
            for (auto jt = it + 1; jt != nums.end(); ) {
                if (*it == *jt) {
                    jt = nums.erase(jt);
                }
                else {
                    ++jt;
                }
            }
        }
        return nums.size();
    }
};