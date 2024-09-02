class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int first = m - 1, second = n - 1, curr = m + n - 1;
        while(second >= 0)
        {
            if (first >= 0 && nums1[first] > nums2[second])
            {
                nums1[curr] = nums1[first];
                first--;
            }
            else
            {
                nums1[curr] = nums2[second];
                second--;
            }
            curr--;
        }
    }
};