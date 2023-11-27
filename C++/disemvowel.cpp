# include <string>

std::string disemvowel(const std::string& str) {
    
    std::vector<char> vowels = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

    std::string res = "";
  
    for (auto ch : str) {
      if (std::find(vowels.begin(), vowels.end(), ch) == vowels.end()) {
          res += ch;
      }
    }
    
    return res;
}