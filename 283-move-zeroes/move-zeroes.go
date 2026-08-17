func moveZeroes(nums []int)  {
    for s, f := 0, 0; f < len(nums); f++ {
        if nums[f] != 0{
            nums[s], nums[f] = nums[f], nums[s]
            s++
        }
    }
}