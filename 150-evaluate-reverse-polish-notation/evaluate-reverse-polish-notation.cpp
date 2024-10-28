class Solution {
public:
    int calc(int a, int b, char op) {
        switch(op) {
            case '+':
                return a + b;
            case '-':
                return a - b;
            case '*':
                return a * b;
            case '/':
                return a / b;
        }
        return 0;
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int ans;
        for (auto c : tokens) {
            if ((c.size() == 1 && isdigit(c[0])) || (c.size() > 1 && isdigit(c[1])))
                s.push(stoi(c));
            else {
                if (s.size() >= 2) {
                    auto n2 = s.top();
                    s.pop();
                    auto n1 = s.top();
                    s.pop();
                    s.push(calc(n1, n2, c[0]));
                }
                else {
                    auto n2 = s.top();
                    s.pop();
                    s.push(calc(0, n2, c[0]));
                }
            }
        }
        ans = s.top();
        s.pop();
        return ans;
    }
};