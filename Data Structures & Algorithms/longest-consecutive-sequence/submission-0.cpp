class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet;
        for (int n : nums) {
            numSet.insert(n);
        }

        vector<int> starters;
        for (int n : numSet) {
            if (!numSet.contains(n - 1)) {
                starters.push_back(n);
            }
        }

        int maxLen = 0;
        for (int s : starters) {
            int len = 1;
            int i = 1;
            while (true) {
                if (numSet.contains(s + i)) {
                    len++;
                    i++;
                }
                else break;
            }
            maxLen = max(maxLen, len);

        }

        return maxLen;

    }
};
