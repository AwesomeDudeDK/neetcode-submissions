class Solution {
public:
    bool isPalindrome(string s) {
        string cleanStr;

        for (char c : s) {
            if (isalnum(c)) {
                cleanStr += tolower(c);
            }
        }
        
        return cleanStr == string(cleanStr.rbegin(), cleanStr.rend());


    }
};
