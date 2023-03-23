package kata

type PosPeaks struct {
	Pos   []int
	Peaks []int
}

func PickPeaks(array []int) PosPeaks {
	var pos []int
	var peak []int

	tmpPeak := -1
	tmpPos := -1
	for index, value := range array {
		if index == len(array)-1 {
			if tmpPeak != -1 {
				if value < tmpPeak {
					peak = append(peak, tmpPeak)
					pos = append(pos, tmpPos)
					tmpPeak = -1
					tmpPos = -1
				}
			}
		} else if index != 0 && index != len(array)-1 {
			if tmpPeak != -1 {
				if value < tmpPeak {
					peak = append(peak, tmpPeak)
					pos = append(pos, tmpPos)
					tmpPeak = -1
					tmpPos = -1
				} else if value > tmpPeak {
					tmpPeak = int(value)
					tmpPos = index
				}
			} else if array[index+1] < value && array[index-1] < value {
				pos = append(pos, index)
				peak = append(peak, int(value))
			} else if array[index+1] == value && array[index-1] < value {
				tmpPeak = int(value)
				tmpPos = index
			}
		}
	}
	return PosPeaks{Pos: pos, Peaks: peak}
}
