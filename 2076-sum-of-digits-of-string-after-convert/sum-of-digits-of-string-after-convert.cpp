class Solution {
public:
    int getLucky(string s, int k) {
        std::string number = "";
        for (auto c : s)
            number += to_string(c - 'a' + 1);
        while (k > 0)
        {
            int sum = 0;
            for (auto c : number)
                sum += c - '0';
            number = to_string(sum);
            k--;
        }
        return stoi(number);
    }
};