#include <vector>

std::vector<int> reverseSeq(int n) {
  std::vector<int> ans;

  while (n > 0)
    ans.push_back(n--);

  return ans;
}