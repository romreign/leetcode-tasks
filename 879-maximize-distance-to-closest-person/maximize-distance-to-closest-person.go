func maxDistToClosest(seats []int) int {
    s := 0
    maxD := 0

    for f := 1; f < len(seats); f++ {
        if seats[s] == 0 && seats[f] == 1 ||
            seats[s] == 1 && seats[f] == 0 && f == len(seats) - 1 {
                maxD = max(maxD, f - s)
                s = f
        } else if seats[s] == 1 && seats[f] == 1 {
            maxD = max(maxD, (f - s) / 2)
            s = f
        }
    }

    return maxD
}