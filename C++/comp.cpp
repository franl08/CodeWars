#include <vector>
#include<math.h>

class Same {
public :
    static bool comp(std::vector<int>&a, std::vector<int>&b) {
      
      if(a.size() != b.size()) return false;
      
      for(auto val : a) {
        auto it = std::find(b.begin(), b.end(), pow(val, 2));
        if(it == b.end()) {
          return false;
        } else {
          b.erase(it);
        }
      }
      
      return true;
    }
};