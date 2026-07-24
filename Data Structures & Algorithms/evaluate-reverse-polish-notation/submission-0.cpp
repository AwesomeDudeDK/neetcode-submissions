class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        int top1; int top2;

        for (string c : tokens) {
            if (c == "+") {
                updateTopTwo(top1, top2, s);
                s.push(top2 + top1);
            } else if (c == "-") {
                updateTopTwo(top1, top2, s);
                s.push(top2 - top1);
            } else if (c == "*") {
                updateTopTwo(top1, top2, s);
                s.push(top2 * top1);
            } else if (c == "/") {
                updateTopTwo(top1, top2, s);
                s.push(top2 / top1);
            } else {
                s.push(stoi(c));
            }
        }

        return s.top();
    }

    void updateTopTwo(int& top1, int& top2, stack<int>& s) {
        top1 = s.top();
        s.pop();
        top2 = s.top();
        s.pop();
    }
};
