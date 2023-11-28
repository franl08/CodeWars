std::string reverse_words(std::string str)
{
  std::string ans = "";
  
  std::string cur_word = "";
  
  for (auto ch : str) {
    if (ch != ' ') {
      cur_word += ch;
    } else {
      std::reverse(cur_word.begin(), cur_word.end());
      ans += cur_word + ch;
      cur_word = "";
    }
  }
  
  if (cur_word != "") {
    std::reverse(cur_word.begin(), cur_word.end());
    ans += cur_word;
  }
  
  return ans;
}