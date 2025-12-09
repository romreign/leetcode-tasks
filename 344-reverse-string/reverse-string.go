func reverseString(s []byte)  {
    for first, second := 0, len(s) - 1; first < second; first, second = first + 1, second - 1 {
        s[first], s[second] = s[second], s[first]
    }
}