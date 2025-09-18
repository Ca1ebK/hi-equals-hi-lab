#include <string>
#include "string_compare.hpp"
#include "string_to_ascii.hpp"

int string_compare(std::string str1, std::string str2) {
   
   int ascii_value_1 = string_to_ascii(str1);
   int ascii_value_2 = string_to_ascii(str2);

   if (ascii_value_1 < ascii_value_2) {
      return -1;
   }
   else if (ascii_value_1 > ascii_value_2) {
      return 1;
   }
   
   return 0;
}
