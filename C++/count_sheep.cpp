#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) 
{
  int count = 0;
  
  for (auto v : arr) {
    if (v) count++;
  }
  
  return count;
}