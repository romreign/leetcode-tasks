func groupAnagrams(strs []string) [][]string {
    freqs := map[[26]int][]string{}

    for _, word := range strs {
        var freq [26]int
        for _, v := range word {
            freq[v - 'a']++
        } 

        if v, ok := freqs[freq]; ok {
            freqs[freq] = append(v, word)
        } else {
            freqs[freq] = []string{word}
        }
    }

    res := [][]string{}

    for _, v := range freqs {
        res = append(res, v)
    }

    return res
}

