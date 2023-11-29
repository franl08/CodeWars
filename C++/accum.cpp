#include <ctype.h>

class Accumul
{
public:
    static std::string accum(const std::string &s) {
      
      std::string result = "";
      
      for (unsigned long i = 0; i < s.length(); i++) {
        char to_replicate = tolower(s[i]);
        std::string tmp_result(1, toupper(to_replicate));
        
        for(unsigned long j = 1; j <= i; j++) tmp_result += to_replicate;
        
        if (i != 0) result += "-";
        
        result += tmp_result;
      }
      
      return result;
      
    }
};