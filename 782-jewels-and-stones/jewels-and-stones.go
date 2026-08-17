func numJewelsInStones(jewels string, stones string) int {
    countJewels := 0
    typeJewels := make(map[rune]struct{})

    for _, v := range jewels {
        typeJewels[v] = struct{}{}
    }

    for _, v := range stones {
        if _, ok := typeJewels[v]; ok {
            countJewels++
        }
    }

    return countJewels
}