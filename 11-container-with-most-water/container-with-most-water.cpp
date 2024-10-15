class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = -1, l = 0, r = height.size() - 1;
        while (l < r) {
            max_water = max(max_water, 
                            ((r - l) * min(height[l], height[r])));
            height[l] < height[r] ? l++ : r--;
        }
        return max_water;
    }
};