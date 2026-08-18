func checkInclusion(s1 string, s2 string) bool {
    if len(s1) > len(s2) {
        return false
    }

    freq, windowFreq := [26]int{}, [26]int{}
    l, r := 0, len(s1)

    for _, v := range s1 {
        freq[v - 'a']++
    }

    for _, v := range s2[l:r] {
        windowFreq[v - 'a']++
    }

    if equalArray(freq, windowFreq) == true {
        return true
    }

    for r < len(s2) {
        windowFreq[s2[l] - 'a']--
        windowFreq[s2[r] - 'a']++

        if equalArray(freq, windowFreq) == true {
            return true
        }

        l++
        r++
    }

    return false
}

func equalArray(arr1, arr2 [26]int) bool {
    for i := range 26 {
        if arr1[i] != arr2[i] {
            return false
        }
    }
    return true
}

