func isPalindrome(s string) bool {
    for first, second := 0, len(s) - 1; first < second; {
        leftRune := unicode.ToLower(rune(s[first]))
        rightRune := unicode.ToLower(rune(s[second]))

        if !isLetterAndDigitRune(leftRune) {
            first++
            continue
        }

        if !isLetterAndDigitRune(rightRune) {
            second--
            continue
        }

        if leftRune != rightRune {
            return false
        }

        first, second = first + 1, second - 1
    }
    return true
}

func isLetterAndDigitRune(ch rune) bool {
    return unicode.IsDigit(ch) || unicode.IsLetter(ch)
}