class Solution {
    public int findMiddleIndex(int[] nums) {
        int sum = Arrays.stream(nums).sum();
        int presum = 0;

        for (int i = 0; i < nums.length; i++) {
            if (presum == sum - nums[i] - presum) 
                return i;
            presum += nums[i];
        }
        return -1;
    }
}