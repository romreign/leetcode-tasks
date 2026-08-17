func removeDuplicates(nums []int) int {
    s := 0

    for f := 0; f < len(nums); f++ {
        if nums[f] != nums[s] {
            s++
            nums[s], nums[f] = nums[f], nums[s]
        }
    }

    return s + 1
}