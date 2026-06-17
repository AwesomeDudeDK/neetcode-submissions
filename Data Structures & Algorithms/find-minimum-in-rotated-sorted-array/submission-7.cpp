class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size() - 1;

        if (nums.size() == 1) {
            return nums[0];
        } else if (nums.size() == 2) {
            return min(nums[0], nums[1]);
        }

        int minNum = nums[0];
        while (l < r) {
            int m = l + (r - l) / 2;

            if (nums[m] > nums[r]) {
                l = m + 1;
            } else {
                r = m;
            }
        }
        
        return nums[l];
    }
};
