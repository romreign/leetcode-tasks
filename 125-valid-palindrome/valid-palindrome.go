func isPalindrome(s string) bool {
    for first, second := 0, len(s) - 1; first < second; first, second = first + 1, second - 1 {
        for first < second && !unicode.IsLetter(rune(s[first])) && !unicode.IsDigit(rune(s[first])) {
            first++
        }
        for first < second && !unicode.IsLetter(rune(s[second])) && !unicode.IsDigit(rune(s[second])) {
            second--
        }
        if strings.ToLower(string(s[first])) != strings.ToLower(string(s[second])) {
            return false
        }
    }
    return true
}