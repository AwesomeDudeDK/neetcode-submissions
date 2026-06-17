class Solution {
public:
    bool isValid(string s) {
        stack<char> bracketStack;

        for (char c : s) {
            switch (c) {
                case '(':
                case '[':
                case '{':
                    bracketStack.push(c);
                    break;
                case ')':
                    if (bracketStack.empty() || bracketStack.top() != '(') return false;
                    bracketStack.pop();
                    break;
                case ']':
                    if (bracketStack.empty() || bracketStack.top() != '[') return false;
                    bracketStack.pop();
                    break;
                case '}':
                    if (bracketStack.empty() || bracketStack.top() != '{') return false;
                    bracketStack.pop();
                    break;
            }
        }

        return bracketStack.size() == 0;
    }
};
