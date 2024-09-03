class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for (auto i = 0; i < arr.size() - 1; i++)
        {
            int maximum = 0;
            for (auto j = 1 + i; j < arr.size(); j++)
            {
                if (arr[j] > maximum)
                    maximum = arr[j];
            }
            arr[i] = maximum;
        }
        arr[arr.size() - 1] = -1;
        return arr;
    }
};