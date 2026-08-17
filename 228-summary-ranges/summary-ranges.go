func summaryRanges(nums []int) []string {
    l, r := 0, 0
    res := []string{}

    for l < len(nums) {
        for r < len(nums) - 1 && nums[r] + 1 == nums[r + 1]{
            r++
        }

        if l != r {
            res = append(res, strconv.Itoa(nums[l]) + "->" + strconv.Itoa(nums[r]))
        } else {
            res = append(res, strconv.Itoa(nums[l]))
        }

        r++
        l = r
    }

    return res 
}
