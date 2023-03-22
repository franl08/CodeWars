package kata

import (
	"strconv"
)

func SumMix(arr []any) int {
	ans := 0
	for _, v := range arr {
		if _, ok := v.(string); ok {
			value, err := strconv.Atoi(v.(string))
			if err == nil {
				ans += value
			}
		} else {
			ans += v.(int)
		}
	}
  return ans
}
