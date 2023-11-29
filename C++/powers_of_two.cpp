#include <cstdint>
#include <math.h>
#include <vector>

std::vector<uint64_t> powers_of_two(int n) {

  std::vector<uint64_t> vec;

  for (int i = 0; i <= n; i++)
    vec.push_back(pow(2, i));

  return vec;
}