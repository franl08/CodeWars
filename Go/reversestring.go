package kata

func Solution(word string) (result string) {
	for _, v := range word {
		result = string(v) + result
	}
	return
}
