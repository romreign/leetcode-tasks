class Solution {
    public int findMiddleIndex(int[] nums) {
        int n = nums.length;
        int[] preLeft = new int[n];
        int[] preRight = new int[n];
  
        for (int i = 1; i < n; i++) {
            preLeft[i] = preLeft[i - 1] + nums[i - 1];
            preRight[n - i - 1] = preRight[n - i] + nums[n - i];
        }
        
        for (int i = 0; i < n; i++) 
            if (preLeft[i] == preRight[i])
                return i;
        return -1;
    }
}