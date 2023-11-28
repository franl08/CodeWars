#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    std::vector<int> ans = {0, 0};
  
    for (auto val : input) {
      if (val > 0) {
        ans[0]++;
      } else if (val < 0) {
        ans[1] += val;
      }
    }
    
    if (ans[0] == 0 && ans[1] == 0) {
      return {};
    }
  
    return ans;
}