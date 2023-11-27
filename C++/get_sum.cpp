int get_sum(int a, int b)
{
  
  int result = 0;
  
  if (a == b) {
    result = a;
  } else if (a > b) {
    for (int i = b; i <= a; i++) {
      result += i;
    }
  } else {
    for (int i = a; i <= b; i++) {
      result += i;
    }
  }
  
  return result;
}