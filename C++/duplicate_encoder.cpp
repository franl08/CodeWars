#include <map>
#include <string>
std::string duplicate_encoder(const std::string &word) {

  std::map<char, int> mp;

  for (auto ch : word) {
    int ascii_ch = ch;
    if (ascii_ch >= 65 && ascii_ch <= 90) {
      ch = tolower(ch);
    }
    if (mp.count(ch) > 0) {
      std::cout << ch << "\n";
      mp[ch]++;
    } else {
      std::cout << ch << "\n";
      mp[ch] = 1;
    }
  }

  std::string result = "";

  for (auto ch : word) {

    int ascii_ch = ch;
    if (ascii_ch >= 65 && ascii_ch <= 90) {
      ch = tolower(ch);
    }

    if (mp[ch] > 1) {
      result += ')';
    } else {
      result += '(';
    }
  }

  return result;
}