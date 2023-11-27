#include <vector>
#include <string>

std::string findNeedle(const std::vector<std::string>& haystack)
{
    // You may use the function std::to_string to convert numbers to strings for easy concatenation. 
    // E.g., ("hi" + std::to_string(123)) ==> "hi123". Of course, that's only one of many approaches.
    
    std::string pos;
  
    for (int i = 0; i < haystack.size(); i++) {
      if (haystack[i] == "needle") {
        pos = std::to_string(i);
      }
    }
  
    return "found the needle at position " + pos;
}