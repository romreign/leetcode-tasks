func reverseWords(s string) string {
    runes := []rune(s)
    idxSpace := 0
    l, r := 0, 0


    for l < len(runes) {
        for r < len(runes) && runes[r] != ' ' {
            r++
        }

        idxSpace = r
        r--
        
        for l < r {
            runes[l], runes[r] = runes[r], runes[l]
            l++
            r--
        }

        l = idxSpace + 1
        r = idxSpace + 1
    }

    return string(runes)
}