func twoSum(nums []int, target int) []int {
    firstNum := map[int]int{}

    for i := 0; i < len(nums); i++ {
        secondNum := target - nums[i]
        if v, ok := firstNum[secondNum]; ok {
            return []int{v, i}
        }

        firstNum[nums[i]] = i
    }

    return []int{-1, -1}
}