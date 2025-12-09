func maxArea(height []int) int {
    left, right := 0, len(height) - 1
    maxA := 0.0
    for left < right {
        minA := math.Min(float64(height[left]), float64(height[right]))
        maxA = math.Max(maxA, minA * float64(right-left))
        if height[left] < height[right] {
            left++
        } else {
            right--
        }
    }
    return int(maxA)
}
