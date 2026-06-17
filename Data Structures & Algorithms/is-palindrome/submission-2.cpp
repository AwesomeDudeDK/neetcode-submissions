class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;

        while (true) {
            while (!isalnum(s[l])) l++;
            while (!isalnum(s[r])) r--;
            cout << "left: " << s[l] << "; right: " << s[r] << '\n';
            if (l > r) break;
            if (tolower(s[l]) != tolower(s[r])) return false;
            l++;
            r--;
        }
        
        return true;


    }
};
