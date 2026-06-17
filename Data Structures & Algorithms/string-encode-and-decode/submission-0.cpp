class Solution {
public:
    string encode(vector<string>& strs) {
        string s = "";
        for (auto& str : strs) {
            s += str;
            s += ';';
        }
        return s;

    }

    vector<string> decode(string s) {
        vector<string> strs;

        for (int i = 0; i < s.length(); ++i) {
            string temp = "";
            while (true) {
                if (s[i] == ';') break;
                temp += s[i];
                ++i;
            }
            strs.push_back(temp);
        }
        return strs;
    }
};
