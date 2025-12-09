func merge(nums1 []int, m int, nums2 []int, n int)  {
    m, n = m - 1, n - 1
    i := m + n + 1
    for m >= 0 || n >= 0 {
        if m >= 0 && n >= 0 && nums1[m] > nums2[n]{
            nums1[i] = nums1[m]
            m--
        } else if m >= 0 && n >= 0 && nums1[m] <= nums2[n]{
            nums1[i] = nums2[n]
            n--
        } else if m >= 0 {
            nums1[i] = nums1[m]
            m--
        } else {
            nums1[i] = nums2[n]
            n--
        }
        i--
    }
}

