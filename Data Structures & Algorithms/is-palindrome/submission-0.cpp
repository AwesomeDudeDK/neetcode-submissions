class Solution {
public:
    bool isPalindrome(string s) {
        string forward;
        string backward;

        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) {
                forward += s[i];
            } else if (isalpha(s[i])) {
                forward += tolower(s[i]);
            }

            if (isdigit(s[s.length() - i])) {
                backward += s[s.length() - 1 - i];
            } else if (isalpha(s[s.length() - 1 - i])) {
                backward += tolower(s[s.length() - 1 - i]);
            }
        }
        cout << "Forward: " << forward << '\n';
        cout << "Backward: " << backward << '\n';
        return forward == backward;


    }
};
