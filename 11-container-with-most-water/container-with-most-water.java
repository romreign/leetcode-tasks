class Solution {
    public int maxArea(int[] height) {
        int maxWater = 0;
        int Vcurr = 0;
        int lo = 0, hi = height.length - 1;
        while (lo < hi) {
            Vcurr = Math.min(height[lo], height[hi]);
            maxWater = Math.max(maxWater, Vcurr * (hi - lo));
            if (height[hi] >= height[lo])
                lo++;
            else
                hi--;
        }
        return maxWater;
    }
}