#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  vector<char> vowels = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
  for (auto ch : inputStr) {
    if (std::find(vowels.begin(), vowels.end(), ch) != vowels.end()) {
      ++num_vowels;
    }
  }
  return num_vowels;
}