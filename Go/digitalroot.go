package kata

import (
	"strconv"
)

func DigitalRoot(n int) int {
	result := 0
	str := strconv.Itoa(n)
	for _, value := range str {
		tmp, err := strconv.Atoi(string(value))
		if err == nil {
			result += tmp
		}
	}
	str = strconv.Itoa(result)
	if len(str) > 1 {
		return DigitalRoot(result)
	} else {
		return result
	}
}
