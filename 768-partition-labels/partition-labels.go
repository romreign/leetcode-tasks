func partitionLabels(s string) []int {
    letterLastIdx := [26]int{}

    for i, v := range s {
        letterLastIdx[v - 'a'] = i
    }

    currMaxW := 0
    res := make([]int, 0, 1)
    l, r := -1, 0

    for r < len(s) {
        d := letterLastIdx[s[r] - 'a']
        currMaxW = max(currMaxW, d)
        if r == currMaxW {
            res = append(res, r - l)
            l = r
        }
        r++
    }

    return res
}