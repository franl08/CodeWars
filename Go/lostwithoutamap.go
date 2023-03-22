package kata

func Maps(x []int) []int {
	var ans []int

	for _, val := range x {
		ans = append(ans, val * 2)
	}

	return ans
}