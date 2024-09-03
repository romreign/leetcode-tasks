class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3) return false;
        int top = 0;
        for (auto i = 1; i < arr.size(); i++)
        {
            if (arr[i] == arr[i - 1])
                return false;
            if (arr[i] < arr[i - 1])
            {
                top = i - 1;
                break;
            }
        }
        if (top == 0)
            return false;
        for (auto i = top + 1; i < arr.size(); i++)
        {
            if ((arr[i] == arr[i - 1]) || (arr[i] > arr[i - 1]))
                return false;
        }
        return true;
    }
};