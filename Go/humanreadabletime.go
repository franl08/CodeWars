package kata

import (
	"strconv"
)

func getNextUnit(current int) []int {
	nextUnit := 0
	result := make([]int, 2)
	for current >= 60 {
		nextUnit++
		current -= 60
	}
	result[0] = nextUnit
	result[1] = current

	return result
}

func AddZero(value int) string {
	out := strconv.Itoa(value)
	if value < 10 {
		out = "0" + out
	}
	return out
}

func HumanReadableTime(seconds int) string {
	minutesAndSeconds := getNextUnit(seconds)
	hoursAndMinutes := getNextUnit(minutesAndSeconds[0])
	seconds_out := AddZero(minutesAndSeconds[1])
	minutes_out := AddZero(hoursAndMinutes[1])
	hours_out := AddZero(hoursAndMinutes[0])

	return hours_out + ":" + minutes_out + ":" + seconds_out
}
