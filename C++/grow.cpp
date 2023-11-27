#include <vector>
int grow(std::vector<int> nums) {
  
  int result = 1;

  for (auto n : nums) {
    result *= n;
  }

  return result;
}