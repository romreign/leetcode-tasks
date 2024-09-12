class Solution {
public:
    int reverse(int x) {
        long long num = 0;
        long long m_x = x;
        int negative = 1;
        if (m_x < 0)
        {
            negative = -1;
            m_x = m_x * negative;
        }

        while (m_x)
        {
            num = num * 10 + m_x % 10;
            if ((num > numeric_limits<int>::max() && negative == 1) || 
                    (negative == -1 && -num < numeric_limits<int>::min())) 
                return 0;
            m_x /= 10;
        }
        cout << num;
        return num * negative;
    }
};