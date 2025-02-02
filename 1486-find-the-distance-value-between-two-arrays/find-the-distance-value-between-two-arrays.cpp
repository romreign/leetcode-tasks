class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        sort(arr2.begin(), arr2.end());
        for (auto i = 0; i < arr1.size(); ++i) {
            int lo = 0, hi = arr2.size() - 1, lb = arr1[i] - d, ub = arr1[i] + d;

            while(lo <= hi) {
                const int mi = lo + (hi - lo) / 2;
                if (arr2[mi] < lb)
                    lo = mi + 1;
                else if (arr2[mi] > ub)
                    hi = mi - 1;
                else {
                    count++;
                    break;
                }
            }
        }
        return arr1.size() - count;
    }
};