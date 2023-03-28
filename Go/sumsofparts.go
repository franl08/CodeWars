package kata

// ls = [0, 1, 3, 6, 10]
// ls = [1, 3, 6, 10]
// ls = [3, 6, 10]
// ls = [6, 10]
// ls = [10]
// ls = []
//
// [20, 20, 19, 16, 10, 0]

func sum(arr []uint64) uint64 {
	var result uint64
	for _, val := range arr {
		result += uint64(val)
	}
	return result
}

func PartsSums(ls []uint64) []uint64 {
	if len(ls) == 0 {
		return []uint64{0}
	} else {
		sumTotal := sum(ls)
		result := make([]uint64, len(ls)+1)
		for x := 0; x < len(ls); x++ {
			if x != 0 {
				result[x] = sumTotal - sum(ls[:x])
			} else {
				result[x] = sumTotal
			}
		}
		return result
	}
}
