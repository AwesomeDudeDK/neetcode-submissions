class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet;
        for (int n : nums) {
            numSet.insert(n);
        }

        int maxLen = 0;

        for (int n : numSet) {
            if (!numSet.contains(n - 1)) {
                int length = 1;
                while (true) {
                    if (numSet.contains(n + length)) {
                        length++;
                    }
                    else break;
                
                }
                maxLen = max(maxLen, length);
            }
        }
        return maxLen;

    }
};
