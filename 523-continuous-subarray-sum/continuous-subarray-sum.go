func checkSubarraySum(nums []int, k int) bool {
    prefix := 0
    is := prefix % k
    mp := map[int]int{is:-1}

    for i, v := range nums {
        isMult := (prefix + v) % k
        idx, ok := mp[isMult]
        if ok {
            if i - idx >= 2 {
                return true
            }
        }
        
        prefix += v

        if !ok {
            mp[isMult]=i
        } 
    }

    return false
}

