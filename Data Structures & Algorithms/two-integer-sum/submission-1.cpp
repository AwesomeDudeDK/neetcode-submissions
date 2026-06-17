class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> pairs;
        for (int i = 0; i < nums.size(); ++i) {
            pairs.push_back({nums[i], i});
        }
        sort(pairs.begin(), pairs.end());

        int left { 0 };
        int right { nums.size() - 1 };

        while (left < right) {
            int sum { pairs[left].first + pairs[right].first };
            if (sum < target) ++left;
            else if (sum > target) --right;
            else {
                return {min(pairs[left].second, pairs[right].second),
                        max(pairs[left].second, pairs[right].second)};
            }
        }
        return {};
    }
};
