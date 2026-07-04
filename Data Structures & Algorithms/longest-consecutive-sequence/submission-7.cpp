class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nSet(nums.begin(), nums.end());

        int maximum {};
        for (int n : nSet) {
            if (!nSet.contains(n - 1)) {
                int num = n;
                int count {1};
                while (nSet.contains(num + 1)) {
                    count++;
                    num++;
                }
                maximum = std::max(maximum, count);
            }
        }
        return maximum;
    }
};
