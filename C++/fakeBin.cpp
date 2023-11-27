#include <string>

using namespace std;

string fakeBin(string str){
  string result = "";

  vector<char> zeros = {'0', '1', '2', '3', '4'};
  vector<char> ones = {'5', '6', '7', '8', '9'};
  
  for(int x = 0; x < str.length(); x++) {
    if (count(zeros.begin(), zeros.end(), str[x])) {
      result += "0";
    } else if (count(ones.begin(), ones.end(), str[x])) {
      result += "1";
    }
  }
  
  return result;
}