func intervalIntersection(firstList [][]int, secondList [][]int) [][]int {
    p1, p2 := 0, 0
    res := [][]int{}

    for p1 < len(firstList) && p2 < len(secondList) {
        if isJoin(firstList[p1], secondList[p2]) {
            res = append(res, getIntersection(firstList[p1], secondList[p2]))
        }
        
        if MinSecondPoint(firstList[p1], secondList[p2]) {
            p1++
        } else {
            p2++
        }
    }

    return res
}

func MinSecondPoint(firstList, secondList []int) bool {
    return firstList[1] < secondList[1]
}

func isJoin(firstList, secondList []int) bool {
    return max(firstList[0], secondList[0]) <= min(firstList[1], secondList[1])
}

func getIntersection(firstList, secondList []int) []int {
    return []int{max(firstList[0], secondList[0]), min(firstList[1], secondList[1])}
}