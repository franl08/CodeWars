class Printer
{
public:
    static std::string printerError(const std::string &s) {
      
      std::string size = std::to_string(s.length());
      int errors = 0;
      
      for (auto ch : s) {
        if(int(ch) > 109) {
          errors++;
        }
      }
      
      return std::to_string(errors) + "/" + size;
      
    }
};