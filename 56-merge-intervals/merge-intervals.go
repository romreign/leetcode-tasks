func merge(intervals [][]int) [][]int {
    slices.SortFunc(intervals,func(a, b []int) int {
        if a[0] == b[0] {
            return cmp.Compare(a[1], b[1])
        }
        return cmp.Compare(a[0], b[0])
    })

    res := [][]int{intervals[0]}

    for i := 1; i < len(intervals); i++ {
        if isMerging(res[len(res) - 1], intervals[i]) {
            res[len(res) - 1] = merged(res[len(res) - 1], intervals[i])
        } else {
            res = append(res, intervals[i])
        }
    }

    return res
}

func isMerging(interval1, interval2 []int) bool {
    return max(interval1[0], interval2[0]) <= min(interval1[1], interval2[1]) 
}

func merged(interval1, interval2 []int) []int {
    return []int{min(interval1[0], interval2[0]),max(interval1[1], interval2[1])}
}