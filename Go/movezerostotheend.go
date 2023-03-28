package kata

// MoveZeros([]int{1, 2, 0, 1, 0, 1, 0, 3, 0, 1})
// returns []int{ 1, 2, 1, 1, 3, 1, 0, 0, 0, 0 }

func MoveZeros(arr []int) []int {
	result := make([]int, len(arr))
	size := len(arr)
	ac := 0
	numZeros := 0
	for _, x := range arr {
		value := int(x)
		if value != 0 {
			result[ac] = value
			ac++
		} else {
			result[size-numZeros-1] = 0
			numZeros++
		}
	}
	return result
}
