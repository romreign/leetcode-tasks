func evalRPN(tokens []string) int {
    st := []int{}

    for _, ch := range tokens {
        if ch != "+" && ch != "-" && ch != "*" && ch != "/" {
            v, _ := strconv.Atoi(ch)
            st = append(st, v)
        } else {
            num2 := st[len(st) - 1]
            st = st[:len(st) - 1]
            num1 := st[len(st) - 1]
            st = st[:len(st) - 1]
            v := calc(num1, num2, ch)
            st = append(st, v)
        }
    }

    return st[0]
}

func calc(a, b int, op string) int {
    switch op {
    case "+":
        return a + b
    case "-":
        return a - b
    case "*":
        return a * b
    case "/":
        return a/b
    }
    return 0
}