func subarraySum(nums []int, k int) int {
    prefix := 0
    count := 0
    mp := map[int]int {prefix:1}

    for _, v := range nums {
        prefix += v
        find := prefix - k
        count += mp[find]
        mp[prefix]++
    }

    return count
}

