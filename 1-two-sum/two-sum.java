class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        
        for (int i = 0; i < nums.length; i++) {
            int curr = nums[i];
            int find = target - curr;
            if (map.containsKey(find))
                return new int[] {map.get(find), i};
            map.put(curr, i);
        }
        return new int[] {};
    }
}