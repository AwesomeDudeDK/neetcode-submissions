class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> sLetters;
        for (size_t i = 0; i < s.size(); i++) {
            if (!sLetters.contains(s[i])) {
                sLetters[s[i]] = 1;
            } else {
                sLetters[s[i]] += 1;
            }
        }
        unordered_map<char, int> tLetters;
        for (size_t i = 0; i < t.size(); i++) {
            if (!tLetters.contains(t[i])) {
                tLetters[t[i]] = 1;
            } else {
                tLetters[t[i]] += 1;
            }
        }
        return sLetters == tLetters;
    }
};
