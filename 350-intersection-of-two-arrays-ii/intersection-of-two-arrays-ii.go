func intersect(nums1 []int, nums2 []int) []int {
    interSection := []int{}
    freqNums1 := map[int]int{}

    for _, n := range nums1 {
        freqNums1[n]++
    }

    for _, n := range nums2 {
        if v, ok := freqNums1[n]; ok && v > 0 {
            interSection = append(interSection, n)
            freqNums1[n]--
        }
    }

    return interSection
}