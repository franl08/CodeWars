#include <string>
bool solution(std::string const &str, std::string const &ending) {
    if (ending.size() > str.size() || str.size() == 0) {
      return false;
    } else if (str == ending) {
      return true;
    } else {
      return str.substr(str.length() - ending.length(), str.length() - 1) == ending;
    }
}