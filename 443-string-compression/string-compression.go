func compress(chars []byte) int {
    l := 0
    ch := chars[0]
    count := 0

    for r := 0; r <= len(chars); r++ {
        if r < len(chars) && ch == chars[r] {
            count++
        } else {
            chars[l] = ch
            l++
            if count > 1 {
                num := strconv.Itoa(count)
                for i := 0; i < len(num); i, l = i + 1, l + 1 {
                    chars[l] = num[i]
                }
            }
            if r < len(chars) {
                ch = chars[r]
                count = 1
            }
        }
    }

   return l
}