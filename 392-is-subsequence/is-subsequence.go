func isSubsequence(s string, t string) bool {
    first, second := 0, 0

    for first < len(s) && second < len(t) {
        if s[first] == t[second] {
            first++
        }
        second++
    }
    return first == len(s)
}