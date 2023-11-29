#include <vector>

using namespace std;

int findSmallest(vector<int> list) {
  int smaller = list[0];

  for (auto val : list)
    smaller = val < smaller ? val : smaller;

  return smaller;
}