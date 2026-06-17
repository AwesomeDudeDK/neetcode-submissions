class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res = 0;

        for (int n : nums) {
            if (!mp[n]) {
                mp[n] = mp[n - 1] + mp[n + 1] + 1; // length of prev sequence + next sequence + itself
                mp[n - mp[n - 1]] = mp[n];
                mp[n + mp[n + 1]] = mp[n];
                res = max(res, mp[n]);
            }
        }
        return res;
        
        
        
        
        // unordered_set<int> numSet;
        // for (int n : nums) {
        //     numSet.insert(n);
        // }

        // int maxLen = 0;

        // for (int n : numSet) {
        //     if (!numSet.contains(n - 1)) {
        //         int length = 1;
        //         while (true) {
        //             if (numSet.contains(n + length)) {
        //                 length++;
        //             }
        //             else break;
                
        //         }
        //         maxLen = max(maxLen, length);
        //     }
        // }
        // return maxLen;

    }
};
