class Solution {
public:
    string encode(vector<string>& strs) {
        if (strs.empty()) return "";

        string res = "";
        for (string& s : strs) {
            res += to_string(s.length()) + '#' + s;
        }
        return res;

        // if (strs.empty()) return "";
        // vector<int> sizes;
        // string res = "";

        // for (string& s : strs) {
        //     sizes.push_back(s.size());
        // }
        // for (int sz : sizes) {
        //     res += to_string(sz) + ',';
        // }

        // res += '#';
        // for (string& s : strs) {
        //     res += s;
        // }
        // return res;
    }

    vector<string> decode(string s) {
        if (s.empty()) return {};
        
        vector<string> strs;
        int i = 0;

        while (i < s.length()) {
            int j = i;
            while (s[j] != '#') ++j;

            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            j = i + length;

            strs.push_back(s.substr(i, length));

            i = j;
        }

        return strs;



        // if (s.empty()) return {};

        // vector<int> sizes;

        // int i = 0;
        // while (s[i] != '#') {
        //     string temp = "";
        //     while (s[i] != ',') {
        //         temp += s[i];
        //         ++i;
        //     }
        //     sizes.push_back(stoi(temp));
        //     ++i;
        // }

        // ++i;

        // vector<string> strs;
        
        // for (int sz : sizes) {
        //     strs.push_back(s.substr(i, sz));
        //     i += sz;
        // }
        // return strs;
    }
};
