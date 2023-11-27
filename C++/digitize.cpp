#include <vector>
#include <algorithm>

std::vector<int> digitize(unsigned long n) 
{        
  std::string val = std::to_string(n);

  std::vector<int> values;

  for (int i = 0; i < val.size(); i++) {
    values.push_back(val[i] - '0');  // Convert char to int and add to vector
  }
  
  std::reverse(values.begin(), values.end());
  
  return values;
}