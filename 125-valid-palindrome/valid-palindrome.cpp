class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 1) return true;
        string buffer = "";
        for (auto c : s)
        {
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
                buffer += c;
        }
        int left = 0, right = buffer.size() - 1;
        transform(buffer.begin(), buffer.end(), buffer.begin(), [](char c){return tolower(c);});
        while (left <= right)
        {
            if (buffer[left] != buffer[right])
                return false;
            else
                left++, right--;
        }
        return true;
    }
};