func firstUniqChar(s string) int {
    var letters [26]int

    for _, v := range s {
        letters[v - 'a']++
    }

    for i, v := range s {
        if letters[v - 'a'] == 1 {
            return i
        }
    }

    return -1
}