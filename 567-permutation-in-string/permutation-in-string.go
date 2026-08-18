func checkInclusion(s1 string, s2 string) bool {
    if len(s1) > len(s2) {
        return false
    }

    freq, windowFreq := [26]int{}, [26]int{}

    for _, v := range s1 {
        freq[v - 'a']++
    }

    for _, v := range s2[:len(s1)] {
        windowFreq[v - 'a']++
    }

    for l, r := 0, len(s1); r < len(s2); l, r = l + 1, r + 1 {
        if equalArray(freq, windowFreq) == true {
            return true
        }

        windowFreq[s2[l] - 'a']--
        windowFreq[s2[r] - 'a']++
    }

    return equalArray(freq, windowFreq)
}

func equalArray(arr1, arr2 [26]int) bool {
    for i := range 26 {
        if arr1[i] != arr2[i] {
            return false
        }
    }
    return true
}

