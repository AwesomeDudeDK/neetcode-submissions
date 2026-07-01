class Solution {
public:
    string encode(vector<string>& strs) {
        string ret = "";
        for (string s : strs) {
            for (char c : s) {
                ret += c;
            }
            ret += "#EOS#";
        }
        return ret;
    }

    vector<string> decode(string s) {
        vector<string> ret;

        string word = "";
        for (int i = 0; i < s.size(); i++) {
            if (i != s.size() - 6 && s.substr(i, 5) == "#EOS#") {
                ret.push_back(word);
                word = "";
                i+=4;
            } else {
                word += s[i];
            }
        }
        return ret;
    }
};
