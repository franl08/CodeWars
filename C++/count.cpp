#include <map>
#include <string>

std::map<char, unsigned> count(const std::string &string) {
  std::map<char, unsigned> mp = {};

  for (auto ch : string) {
    if (mp.count(ch) > 0) {
      mp[ch]++;
    } else {
      mp[ch] = 1;
    }
  }

  return mp;
}