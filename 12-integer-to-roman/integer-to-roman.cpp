class Solution {
public:
    string intToRoman(int num) {
        string result = "";
        vector<pair<int,string>> aRoman 
        {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, 
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, 
        {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
        for (auto i = 0; i < aRoman.size(); i++){
            while (num >= aRoman[i].first) {
                num -= aRoman[i].first;
                result += aRoman[i].second;
            }
        }
        return result;
    }
};