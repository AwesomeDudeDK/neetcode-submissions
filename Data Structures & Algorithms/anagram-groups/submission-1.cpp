class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int, 26>, vector<string>> m{};
        for (string s : strs) {
            array<int, 26> a{};
            for (int i = 0; i < s.size(); i++) {
                a[s[i] - 'a']++;
            }
            if (m.contains(a)) m[a].push_back(s);
            else m[a] = {s};
        }

        vector<vector<string>> ret;
        for (const auto& [key, value] : m) {
            ret.push_back(value);
        }
        return ret;
    }
};
