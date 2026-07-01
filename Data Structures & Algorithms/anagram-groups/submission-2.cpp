class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m{};
        for (string s : strs) {
            array<int, 26> a{};
            for (int i = 0; i < s.size(); i++) {
                a[s[i] - 'a']++;
            }
            string skey = "";
            for (int i = 0; i < a.size(); i++) {
                skey.append(to_string(a[i]) + ',');
            }
            m[skey].push_back(s);
        }

        vector<vector<string>> ret;
        for (const auto& [key, value] : m) {
            ret.push_back(value);
        }
        return ret;
    }
};
