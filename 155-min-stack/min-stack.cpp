class MinStack {
    vector<int> v;
    multiset<int> mv;
public:
    MinStack() = default;
    
    void push(int val) {
        v.push_back(val);
        mv.insert(val);
    }
    
    void pop() {
        mv.erase(mv.find(v.back()));
        v.erase(v.end() - 1);
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        return *mv.begin();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */