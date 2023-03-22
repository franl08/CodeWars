package kata

func Solution(word string) (result string) {
	for _, v := range word {
		result = v + result
	}
	return
}