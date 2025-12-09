func sortedSquares(nums []int) []int {
    n := len(nums)
    result := make([]int, n)
    left, right, index := 0, n - 1, n - 1 

    for left <= right {
        if math.Abs(float64(nums[left])) < math.Abs(float64(nums[right])) {
            result[index] = nums[right] * nums[right] 
            index--
            right--
        } else {
            result[index] = nums[left] * nums[left]
            index--
            left++
        }
    }

    return result
}