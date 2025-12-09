func moveZeroes(nums []int)  {
    j := 0
    for i, _ := range nums {
        if (nums[i] == 0) {
            continue
        }
        nums[i], nums[j] = nums[j], nums[i]
        j++
    }
}