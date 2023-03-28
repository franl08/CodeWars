package kata

// 1234 -> 5

func CountBits(value uint) (result int) {
	result = 0

	for value != 0 {
		if (value % 2) == 1 {
			result++
		}
		value /= 2
	}

	return

}
