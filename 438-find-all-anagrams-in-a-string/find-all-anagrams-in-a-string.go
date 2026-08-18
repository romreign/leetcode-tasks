func findAnagrams(s string, p string) []int {
    res := []int{}
    if len(s) < len(p) {
        return res
    }

    freqCurr, freqWindow := [26]int{}, [26]int{}

    for _, ch := range p {
        freqCurr[ch - 'a']++
    }

    for _, ch := range s[:len(p)] {
        freqWindow[ch - 'a']++
    }

    for l, r := 0, len(p); r <= len(s); l, r = l+1, r+1 {
        if equalArrs(freqCurr, freqWindow) {
            res = append(res, l)
        }

        freqWindow[s[l] - 'a']--
        if r != len(s) {
            freqWindow[s[r] - 'a']++
        }
    }

    return res
}

func equalArrs(arr1, arr2 [26]int) bool {
    for i := range 26 {
        if arr1[i] != arr2[i] {
            return false
        }
    }
    return true
}