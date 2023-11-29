bool is_isogram(std::string str) {

  std::vector<char> chars;

  if (str == "")
    return true;

  for (auto ch : str) {
    if (std::find(chars.begin(), chars.end(), tolower(ch)) != chars.end())
      return false;
    else
      chars.push_back(tolower(ch));
  }

  return true;
}