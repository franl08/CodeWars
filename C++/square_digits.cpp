int square_digits(int num) {

  std::string value = std::to_string(num);
  std::string result;

  for (char ch : value) {
    int val = (ch - '0') * (ch - '0');
    result += std::to_string(val);
  }
  
  return std::stoi(result);
}