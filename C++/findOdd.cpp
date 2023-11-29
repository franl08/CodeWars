#include <map>
#include <vector>

int findOdd(const std::vector<int> &numbers) {
  std::map<int, int> num_appears;

  for (auto n : numbers) {
    if (num_appears.count(n) > 0) {
      num_appears[n]++;
    } else {
      num_appears[n] = 1;
    }
  }

  for (auto n : numbers) {
    if (num_appears[n] % 2)
      return n;
  }

  return 0;
}