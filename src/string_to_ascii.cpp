#include "string_to_ascii.hpp"

int string_to_ascii(std::string str) {

    int ascii_value{0};

    for (std::size_t i = 0; i < str.size(); i++) {
      // convert uppercase letters to lowercase
      if (str[i] >= 65 && str[i] <= 90) {
         ascii_value += str[i] + 32;
      }
      // add the ASCII value of the lowercase character
      else {
         ascii_value += str[i];
      }
   }

   return ascii_value;

}