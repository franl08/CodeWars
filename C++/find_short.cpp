#include <string>
int find_short(std::string str)
{
  int shorter = 0;
  int ac = 0;
  unsigned long first_word_index = 0;
  
  for (unsigned long i = 0; i < str.length(); i++) {
    if (str[i] != ' ') {
      shorter++;
    } else {
      first_word_index = i;
      break;
    }
  }
  
  for(unsigned long i = first_word_index; i < str.length(); i++) {
    if (str[i] != ' ') {
      ac++;
    } else if (ac < shorter && i != first_word_index) {
      shorter = ac;
      ac = 0;
    } else {
      ac = 0;
    }
  }
  
  if (ac > 0 && ac < shorter) {
    shorter = ac;
  }
    
  return shorter;
}