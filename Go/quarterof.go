package kata

func QuarterOf(month int) int {
  if month >= 1 && month <= 3 {
	return 1
  } else if month > 3 && month <= 6 {
	return 2
  } else if month > 6 && month <= 8 {
	return 3
  } else {
	return 4
  }
}