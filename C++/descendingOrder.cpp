#include <cinttypes>

uint64_t descendingOrder(uint64_t a)
{
  
  std::vector<int> digits;

  for (auto ch : std::to_string(a)) {
    digits.push_back(ch - '0');
  }
  
  std::sort(digits.begin(), digits.end(), std::greater<int>());

  std::string ordered_digs = "";
  for (auto i : digits) {
    ordered_digs += std::to_string(i);
  }
    
  return std::stoull(ordered_digs);
}