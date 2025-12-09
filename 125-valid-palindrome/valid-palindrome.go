func isPalindrome(s string) bool {
    for first, second := 0, len(s) - 1; first < second; first, second = first + 1, second - 1 {
        for first < second && !isValidChar(rune(s[first])) {
            first++
        }
        for first < second && !isValidChar(rune(s[second])) {
            second--
        }
        if strings.ToLower(string(s[first])) != strings.ToLower(string(s[second])) {
            return false
        }
        fmt.Println(first)
    }
    return true
}

func isValidChar(ch rune) bool {
    if ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9' {
        return true
    }
    return false
}