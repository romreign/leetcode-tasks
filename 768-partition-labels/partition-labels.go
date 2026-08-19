func partitionLabels(s string) []int {
	last := [26]int{}

	for i := 0; i < len(s); i++ {
		last[s[i]-'a'] = i
	}

	result := make([]int, 0)
	start, end := 0, 0

	for i := 0; i < len(s); i++ {
		if last[s[i]-'a'] > end {
			end = last[s[i]-'a']
		}

		if i == end {
			result = append(result, end-start+1)
			start = i + 1
		}
	}

	return result
}