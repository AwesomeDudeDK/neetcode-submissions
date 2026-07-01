class Solution {
public:
    string encode(vector<string>& strs) {
        string ret = "";
        for (string s : strs) {
            ret.append(to_string(s.size()));
            ret.push_back('#');
            ret.append(s);
        }
        return ret;
    }

    vector<string> decode(string s) {
        vector<string> ret;

        int i = 0;
        while (i < s.size()) {
            int j = i + 1;
            while (s[j] != '#') j++;
            int len = stoi(s.substr(i, j - i));
            i = j + 1;
            ret.push_back(s.substr(i, len));
            i += len;
        }
        return ret;
    }
};
