class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;

        for (string s : strs) {
            vector<int> letters(26);
            for (char c : s) {
                ++letters[c - 'a'];
            }

            string key;
            for (int i : letters) {
                key += i + 'a';
            }

            anagrams[key].push_back(s);
        }

        vector<vector<string>> output;
        for (pair<string, vector<string>> group : anagrams) {
            output.push_back(group.second);
        }

        return output;

    }
};
