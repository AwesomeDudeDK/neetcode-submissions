class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> pairs = {
            {']', '['}, 
            {')', '('}, 
            {'}', '{'}
        };

        stack<char> bracketStack;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                bracketStack.push(c);
            }
            if (pairs.contains(c)) {
                if (bracketStack.size() == 0) return false;
                char frontBracket = bracketStack.top();
                if (pairs[c] != frontBracket) {
                    return false;
                }
                bracketStack.pop();
            }
        }

        return bracketStack.size() == 0;
    }
};
