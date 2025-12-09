func threeSum(nums []int) [][]int {
    n := len(nums)
    seen := make(map[[3]int]bool)
    result := make([][]int, 0)
    sort.Slice(nums, func(i, j int) bool {
        return nums[i] < nums[j]
    })

    for i, v := range nums {
        target := -v
        left, right := i + 1, n - 1

        for left < right {
            sum := nums[left] + nums[right]
            trip := [3]int{v, nums[left], nums[right]}
            if sum == target && !seen[trip] {
                result = append(result, []int{v, nums[left], nums[right]})
                seen[trip] = true
            }
            if sum > target {
                right--
            } else {
                left++
            }
        }
    }

    return result
}

