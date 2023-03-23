package kata

// "(){}[]"   =>  True
// "([{}])"   =>  True
// "(}"       =>  False
// "[(])"     =>  False
// "[({})](]" =>  False

func ValidBraces(str string) bool {
	var opens_read []byte
	for _, value := range str {
		if len(opens_read) == 0 {
			if value != '(' && value != '[' && value != '{' {
				return false
			} else {
				opens_read = append(opens_read, byte(value))
			}
		} else {
			last_index := len(opens_read) - 1
			switch value {
			case ')':
				if opens_read[last_index] == '[' || opens_read[last_index] == '{' {
					return false
				} else {
					opens_read = opens_read[:last_index]
				}
				break
			case ']':
				if opens_read[last_index] == '(' || opens_read[last_index] == '{' {
					return false
				} else {
					opens_read = opens_read[:last_index]
				}
			case '}':
				if opens_read[last_index] == '(' || opens_read[last_index] == '[' {
					return false
				} else {
					opens_read = opens_read[:last_index]
				}
				break
			case '(':
				opens_read = append(opens_read, byte(value))
				break
			case '[':
				opens_read = append(opens_read, byte(value))
				break
			case '{':
				opens_read = append(opens_read, byte(value))
				break
			default:
				return false
			}
		}
	}

	return len(opens_read) == 0
}
