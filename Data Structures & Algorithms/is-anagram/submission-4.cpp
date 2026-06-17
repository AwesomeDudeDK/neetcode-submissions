class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        vector<int> chars(26);

        for (int i = 0; i < s.length(); ++i) {
            ++chars[s[i] - 'a'];
            --chars[t[i] - 'a'];
        }

        for (int i : chars) {
            if (i != 0) return false;
        }
        return true;

    }
};
