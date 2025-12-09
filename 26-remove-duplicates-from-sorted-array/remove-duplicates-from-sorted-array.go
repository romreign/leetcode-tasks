func removeDuplicates(nums []int) int {
    j := 0
    for i, _ := range nums {
        if nums[i] != nums[j] {
            j++
            nums[j] = nums[i]
        }
    }
    j++
    nums = nums[:j]
    return j
}