func missingNumber(nums []int) int {
    n := len(nums) + 1
    sumNums := n * (n - 1) / 2

    for _, v := range nums {
        sumNums -= v
    }

    return sumNums
}
