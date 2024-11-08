void swap_el(std::vector<int>& nums, int start, int end)
{
    while(start < end)
    {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        ++start, --end;
    }
}
class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
            k %= nums.size(); // if k in size more than n
            swap_el(nums, 0, nums.size() - 1);
            swap_el(nums, 0, k - 1);
            swap_el(nums, k, nums.size() - 1);
    }
};
