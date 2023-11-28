#include <math.h>

class DigPow
{
public:
  static int digPow(int n, int p) {
    
    std::string values = std::to_string(n);
    int cur_pw = p;
    int sum = 0;
    
    for (auto ch : values) {
      int val = ch - '0';
      sum += pow(val, cur_pw++);
    }
    
    int k = 0;
    bool found = false;
    
    while (k * n <= sum and !found) {
      if (k * n != sum) {
        k++;
      } else {
        found = true;
      }
    }
    
    return found ? k : -1;
    
  }
};