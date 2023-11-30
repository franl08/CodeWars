#include <utility>
#include <vector>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int> &numbers,
                                            int target) {

  for (unsigned long i = 0; i < numbers.size() - 1; i++) {
    for (unsigned long j = i + 1; j < numbers.size(); j++) {
      if (numbers[j] + numbers[i] == target)
        return {i, j};
    }
  }

  return {0, 0};
}