class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> res;

        for (int i = 0; i < nums.size(); i++) {
            int target = -nums[i];
            int j = i + 1;
            int k = nums.size() - 1;

            if (i > 0 && nums[i] == nums[i - 1]) continue;

            while (j < k) {
                int nj = nums[j];
                int nk = nums[k];
                int sum = nj + nk;
                if (sum > target) {
                    while (k > j && nums[k] == nk) k--;
                }
                else if (sum < target) {
                    while (j < k && nums[j] == nj) j++;
                }
                else {
                    res.push_back({nums[i], nums[j], nums[k]});
                    while (j < k && nums[j] == nj) j++;
                    while (k > j && nums[k] == nk) k--;
                }
            }
        }

        return res;
    }
};
