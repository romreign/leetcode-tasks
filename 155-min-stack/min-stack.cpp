class MinStack {
public:
    MinStack() = default;   
    ~MinStack() = default;

    void push(int val) {
        if (minval.empty() || val <= minval[minval.size() - 1])
            minval.push_back(val);
        st.push_back(val);
    }
    
    void pop() {
        if (st[st.size() - 1] == minval[minval.size() - 1])
            minval.pop_back();
        st.pop_back();
    }
    
    int top() {
        return st[st.size()-1];
    }
    
    int getMin() {
        return minval[minval.size()-1];
    }

private:
    vector<int> st;
    vector<int> minval;
}; 

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */