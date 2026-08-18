func longestSubarray(nums []int) int {
    l, r := 0, 0
    maxL := 0
    deleted := 0 

    for r < len(nums) {
        if nums[r] != 1 {
            deleted++
        }

        for deleted > 1 {
            if nums[l] != 1 {
                deleted--
            }
            l++
        }

        maxL = max(maxL, r - l)
        r++
    }

    return maxL
}