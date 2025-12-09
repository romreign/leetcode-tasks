func twoSum(nums []int, target int) []int {
    m := make(map[int]int)
    for i := 0; i < len(nums); i++ {
        first := target - nums[i]
        if v, ok := m[first]; ok != false {
            return []int{v, i}
        }
        m[nums[i]] = i
    }
    return []int{}
}