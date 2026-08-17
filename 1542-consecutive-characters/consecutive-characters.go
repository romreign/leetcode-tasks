func maxPower(s string) int {
    l := 0
    maxPower := 0
    counter := 0

    for r := 0; r < len(s); r++ {
        if s[l] == s[r] {
            counter++
        } else {
            l = r
            counter = 1
        }
        maxPower = max(maxPower, counter)
    }

    return maxPower
}