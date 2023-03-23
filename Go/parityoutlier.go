package kata

func FindOutlier(integers []int) int {
	var isEven bool
	restZero := integers[0] % 2
	restOne := integers[1] % 2

	// check which one is the impostor
	if restOne != restZero {
		restTwo := integers[2] % 2
		if restTwo == restOne {
			return integers[0]
		} else {
			return integers[1]
		}
	} else {
		isEven = restOne == 1

		for _, val := range integers {
			if isEven {
				if (int(val) % 2) == 0 {
					return int(val)
				}
			} else {
				if (int(val) % 2) != 0 {
					return int(val)
				}
			}
		}
	}
	return -1
}
