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
            if (pairs.contains(c)) {
                if (!bracketStack.empty() && bracketStack.top() == pairs[c]) {
                    bracketStack.pop();
                } else {
                    return false;
                }
            } else {
                bracketStack.push(c);
            }
        }

        return bracketStack.empty();
    }
};
