class Solution {
public:
    bool isPalindrome(string s) {
        size_t i { 0 }; size_t j { s.size() - 1 };

        while (i < j) {
            while (!isalnum(s[i]) && i < j) i++;
            while (!isalnum(s[j]) && i < j) j--;
            if (i >= j) break;
            if (tolower(s[i]) != tolower(s[j])) return false;
            i++; j--;
        }
        return true;
    }
};
