class Solution {
public:
    bool isValid(string s) {
        stack<char> bracketStack;

        unordered_map<char, char> bracketPairs = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char c : s) {
            if (bracketPairs.count(c)) {
                if (bracketStack.empty() || bracketStack.top() != bracketPairs[c]) {
                    return false;
                } else {
                    bracketStack.pop();
                }
            } else {
                bracketStack.push(c);
            }
        }

        return bracketStack.size() == 0;
    }
};
