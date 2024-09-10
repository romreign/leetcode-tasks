class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1, V_max = 0, V_curr = 0;
        while (left <= right)
        {
            V_curr = (right - left) * min(height[right],height[left]);
            V_max = max(V_max, V_curr);
            if (height[right] >= height[left])
                left++;
            else
                right--;
        }
        return V_max;
    }
};