class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> result(arr.size());
        auto maximum = -1;
        for (int i = result.size() - 1; i >= 0; i--)
        {
            result[i] = maximum;
            maximum = max(maximum, arr[i]);
        }
        return result;
    }
};