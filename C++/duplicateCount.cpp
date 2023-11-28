#include <string>
std::size_t duplicateCount(const std::string& in)
{
  
    std::vector<char> chars;
    std::vector<char> already_rep;
    int n_reps = 0;
  
    for (auto ch : in) {
      if(ch == ' ') {
        continue;
      } else if (std::find(chars.begin(), chars.end(), std::tolower(ch)) == chars.end()) {
        if (isdigit(ch)) {
          chars.push_back(ch);
        } else {
            chars.push_back(std::tolower(ch));
          }
      } else  {
          if(std::find(already_rep.begin(), already_rep.end(), std::tolower(ch)) == already_rep.end()) {
            n_reps++;
            already_rep.push_back(std::tolower(ch));
          }
      }
    }
  
  return n_reps;
}