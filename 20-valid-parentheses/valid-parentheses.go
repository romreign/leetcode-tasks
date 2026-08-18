func isValid(s string) bool {
    st := []byte{}

    for i := 0; i < len(s); i++ {
        if isOpenParentheses(s[i]) {
            st = append(st, s[i])
        } else {
            if len(st) == 0 {
                return false
            }

            predParentheses := st[len(st) - 1]
            st = st[:len(st) - 1]
            if !isClose(predParentheses, s[i]) {
                return false
            }
        }
    }

    return len(st) == 0
}

func isOpenParentheses(b byte) bool {
    return b == '(' || b == '{' || b == '['
}

func isClose(open, close byte) bool {
    return open == '(' && close == ')' ||
           open == '{' && close == '}' ||
           open == '[' && close == ']'
}