#include "string_to_ascii.hpp"

int string_to_ascii(const std::string& str) {

    int ascii_value{0};

    for (const char i : str) {
      // convert uppercase letters to lowercase
      if (i >= 65 && i <= 90) {
         ascii_value += i + 32;
      }
      // add the ASCII value of the lowercase character
      else {
         ascii_value += i;
      }
   }

   return ascii_value;

}