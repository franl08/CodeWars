package kata

import (
	"strings"
)

func reverseWord(word string) (result string) {
	for _, v := range word {
		result = string(v) + result
	}
	return
}

func SpinWords(str string) string {

	var ans string
	tmp := strings.Split(str, " ")
	size := len(tmp)

	for index, word := range tmp {
		if len(string(word)) >= 5 {
			ans += reverseWord(string(word))
		} else {
			ans += string(word)
		}
		if index < size-1 {
			ans += " "
		}
	}

	return ans
} // SpinWords
