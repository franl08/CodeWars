package kata

// Parse("iiisdoso") == []int{8, 64}

func Parse(data string) []int {
	var result []int
	ac := 0
	for _, x := range data {
		switch x {
		case 'i':
			ac += 1
			break
		case 'd':
			ac -= 1
			break
		case 's':
			ac *= ac
			break
		case 'o':
			result = append(result, ac)
			break
		default:
			break
		}
	}
	return result
}
