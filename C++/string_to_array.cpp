#include <vector>
#include <string>

std::vector<std::string> string_to_array(const std::string& s) {
    
    std::vector<std::string> ans = {};
  
    int size = s.length();
  
    std::string cur_str = "";
  
    for (int x = 0; x < size; x++) {
      if (s[x] == ' ') {
        ans.push_back(cur_str);
        cur_str = "";
      } else {
        cur_str += s[x];
      }
    }
  
    ans.push_back(cur_str);
  
    return ans;
}