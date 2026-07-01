class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<int, int> smap;
        unordered_map<int, int> tmap;
        for (int i = 0; i < s.size(); i++) {
            if (!smap.contains(s[i])) smap[s[i]] = 1;
            else smap[s[i]]++;

            if (!tmap.contains(t[i])) tmap[t[i]] = 1;
            else tmap[t[i]]++;
        }

        return smap == tmap;
    }
};
