func removeElement(nums []int, val int) int {
    j := 0
    for i, v := range nums {
        if j == i && nums[j] != val {
            j++
        } else if nums[j] == val && v != val {
            nums[i], nums[j] = nums[j], nums[i]
            j++
        }
    }
    return j
}



    