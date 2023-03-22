package kata

import (
	"strings"
)

func Rps(p1, p2 string) string {
	p1 = strings.ToLower(p1);
	p2 = strings.ToLower(p2);
	ans := ""
  	switch p1 {
  		case "rock":
			switch p2 {
				case "rock":
					ans = "Draw!"
				case "paper":
					ans = "Player 2 won!"
				case "scissors":
					ans = "Player 1 won!"
				default:
					ans = ""
  			}
		case "paper":
			switch p2 {
				case "rock":
					ans = "Player 1 won!"
				case "paper":
					ans = "Draw!"
				case "scissors":
					ans = "Player 2 won!"
				default:
					ans = ""
			}
		case "scissors":
			switch p2 {
				case "rock":
					ans = "Player 2 won!"
				case "paper":
					ans = "Player 1 won!"
				case "scissors":
					ans = "Draw!"
				default:
					ans = ""
			}	
		default:
			ans = ""
	}
	return ans
}
