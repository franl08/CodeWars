#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
  
  std::string ans = "";
  
  for (size_t x = 0; x < repeat; x++) {
    ans += str;
  }
  
  return ans;
}