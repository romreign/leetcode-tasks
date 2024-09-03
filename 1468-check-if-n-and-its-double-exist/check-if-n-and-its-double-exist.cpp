class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(auto i = 0; i < arr.size(); i++)
        {
            for (auto j = 0 ; j < arr.size(); j++)
            {
                if (i == j)
                    continue;
                if (arr[i] == (arr[j] * 2))
                    return true;
            }
        }
        return false;
    }
};