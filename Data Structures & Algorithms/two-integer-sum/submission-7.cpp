class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> vi;

        for (int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];
            if (vi.contains(comp)) {
                return {vi[comp], i};
            }
            vi.insert({nums[i], i});
        }
        return {};
    }
};
