class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> set_;
        for (auto i = 0; i < arr.size(); i++)
        {
            if ((arr[i] % 2 == 0 && set_.count(arr[i] / 2) > 0) || set_.count(arr[i] * 2) > 0)
                return true;
            set_.insert(arr[i]);
        }
        return false;
    }
};