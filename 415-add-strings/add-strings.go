func addStrings(num1 string, num2 string) string {
    n1 := []byte(num1)
    n2 := []byte(num2)

    l1 := len(n1)
    l2 := len(n2)
    maxLen := max(l1, l2)

    p1, p2 := l1 - 1, l2 - 1
    balance := 0

    res := make([]byte, maxLen + 1)
    p3 := maxLen

    for p1 >= 0 || p2 >= 0 || balance > 0 {
        sum := balance

        if p1 >= 0 {
            sum += int(n1[p1] - '0')
            p1--
        }
        if p2 >= 0 {
            sum += int(n2[p2] - '0')
            p2--
        }

        res[p3] = byte(sum % 10 + '0')
        p3--

        balance = sum / 10
    }

    if len(res) > 1 && res[0] == 0 {
        res = res[1:]
    }

    return string(res)
}