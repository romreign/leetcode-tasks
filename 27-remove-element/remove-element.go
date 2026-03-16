func removeElement(nums []int, val int) int {
    j := 0
    for i, v := range nums {
        if v != val {
            nums[j], nums[i] = nums[i], nums[j]
            j++
        }
    }
    return j 
}



    