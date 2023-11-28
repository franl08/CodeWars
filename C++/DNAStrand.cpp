#include <string>

std::string DNAStrand(const std::string& dna)
{
  std::string ans = "";
  
  for (auto ch : dna) {
    switch (ch) {
        case 'A':
          ans += "T";
          break;
        case 'T':
          ans += "A";
          break;
        case 'C':
          ans += "G";
          break;
        case 'G':
          ans += "C";
          break;
        default:
          ans += "";
    }
  }
  return ans;
}