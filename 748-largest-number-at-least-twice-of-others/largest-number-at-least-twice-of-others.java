class Solution {
    public int dominantIndex(int[] nums) {
        int n = nums.length;
        int indexMax = 0;
        int max = Arrays
            .stream(nums)
            .max()
            .getAsInt();
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == max)
                indexMax = i;
            else if (nums[i] * 2 > max)
                return -1;
        }
        return indexMax;
    }
}