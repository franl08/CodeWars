class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
      
        std::map<int, int> even;
        std::vector<int> odds;
      
        std::vector<int> result;
      
        for (unsigned long i = 0; i < array.size(); i++) {
          if(array[i] % 2) {
            odds.push_back(array[i]);
          } else {
            even[i] = array[i];
          }
        }
      
        std::sort(odds.begin(), odds.end());
      
        for (unsigned long i = 0; i < array.size(); i++) {
          if (even.find(i) == even.end()) {
            result.push_back(odds[0]);
            odds.erase(odds.begin());
          } else {
            result.push_back(even[i]);
          }
        }
      
        return result;
    }
};