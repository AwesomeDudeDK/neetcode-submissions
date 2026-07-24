class MinStack {
public:
    MinStack() {}
    
    void push(int val) {
        s.push(val);
        if (minVals.size() == 0 || minVals.top() >= val) {
            minVals.push(val);
        }
    }
    
    void pop() {
        if (minVals.top() == s.top()) {
            minVals.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minVals.top();
    }
private:
    stack<int> s;
    stack<int> minVals;
};
