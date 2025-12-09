func twoSum(numbers []int, target int) []int {
    first, second := 0, len(numbers) - 1
    for first < second {
        sum := numbers[first] + numbers[second]
        if sum > target {
            second--
        } else if sum < target {
            first++
        } else {
            return []int{first + 1, second + 1}
        }
    }
    return []int{}
}