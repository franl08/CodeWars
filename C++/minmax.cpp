#include <vector>
using namespace std;

int min(vector<int> list) {
  int min_val = list[0];

  for (auto val : list)
    min_val = val < min_val ? val : min_val;

  return min_val;
}

int max(vector<int> list) {
  int max_val = list[0];

  for (auto val : list)
    max_val = val > max_val ? val : max_val;

  return max_val;
}