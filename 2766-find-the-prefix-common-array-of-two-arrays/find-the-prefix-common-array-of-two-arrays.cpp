class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans(A.size(), 0);
        unordered_set<int> mp;
        auto k = 0;
        for (auto i = 0; i < A.size(); i++) {
            if (A[i] == B[i]) {
                if (i > 0) 
                    ans[i] = ans[i - 1] + 1;
                else 
                    ans[i] = 1;
            }
            else {
                if (i > 0) {
                    if (mp.count(A[i])) k++;
                    if (mp.count(B[i])) k++;
                    ans[i] = ans[i - 1] + k;
                    k = 0;
                }
                else
                    ans[i] = 0;
                mp.insert(B[i]);
            }
            mp.insert(A[i]);
        }
        return ans;
    }
};