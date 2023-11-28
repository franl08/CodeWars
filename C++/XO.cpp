bool XO(const std::string& str)
{
  int xs = 0;
  int os = 0;
  
  for (auto ch : str) {
    if (ch == 'x' || ch == 'X') {
      xs++;
    } else if (ch == 'o' || ch == 'O') {
      os++;
    }
  }
  
  return xs == os;
}