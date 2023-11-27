#include <string>

using namespace std; 

string sliceString (string str )
{
  // your code is here ... Hope You Enjoy !!
  string result = "";
    
  for (int x = 1; x < str.length() - 1; x++) {
    result += str[x];
  }
  return result; 
}