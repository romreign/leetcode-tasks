func lengthOfLongestSubstring(s string) int {
    maxL := 0
    freq := make([]int, 127)

    l, r := 0, 0
    for r < len(s) {
        ch := s[r]
        freq[ch]++

        for freq[ch] > 1 {
            freq[s[l]]--
            l++
        }

        maxL = max(maxL, r - l + 1)
        r++
    }

    return maxL
}