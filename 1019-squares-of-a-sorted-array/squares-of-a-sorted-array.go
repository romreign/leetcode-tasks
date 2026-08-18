func sortedSquares(nums []int) []int {
    n := len(nums)
    res := make([]int, n)
    p1, p2, p3 := 0, n-1, n-1

    for p1 <= p2 {
        lsquare := nums[p1] * nums[p1]
        rsquare := nums[p2] * nums[p2]

        if lsquare < rsquare {
            res[p3] = rsquare
            p2--
        } else {
            res[p3] = lsquare
            p1++
        }
        p3--
    }

    return res
}