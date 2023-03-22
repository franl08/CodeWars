package kata

func DNAtoRNA(dna string) (result string) {
	for _, v := range dna {
		if string(v) == "T" {
			result += "U"
		} else {
			result += string(v)
		}
	}
	return
}