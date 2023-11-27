#include <vector>

int positive_sum (const std::vector<int> arr){
  
  int result = 0;
  
  for (int val : arr) {
      result += val > 0 ? val : 0;
  }
  
  return result;
}