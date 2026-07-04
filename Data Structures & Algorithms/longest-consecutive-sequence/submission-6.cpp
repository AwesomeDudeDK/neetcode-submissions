class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> n;
        for (int i : nums) {
            n.insert(i);
        }

        unordered_set<int> starters;
        for (int i : n) {
            if (!n.contains(i - 1)) starters.insert(i);
        }

        int maximum {};
        for (int s : starters) {
            int num = s;
            int count {1};
            while (n.contains(num + 1)) {
                count++;
                num++;
            }
            maximum = std::max(maximum, count);
        }
        return maximum;
    }
};
