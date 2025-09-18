#include <iostream>

#include "src/string_compare.hpp"

int main() {
  std::string str1{"abc"};
  std::string str2{"abcd"};

  std::cout << "The comparison of " << str1 << " and "
            << str2 << " returns " << string_compare(str1, str2)
            << std::endl;
}
