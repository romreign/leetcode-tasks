class Solution {
public:
    string reverseWords(string s) {
            stringstream ss(s);
            string answer = "", s1;
            while (ss >> s1) {
                reverse(s1.begin(), s1.end());
                answer += (s1 + " ");
            }
            answer.pop_back();
            return answer;
    }
};