#include <iostream>

#include "src/string_compare.hpp"

int main() {
    std::cout << "\n";
    std::cout << "The comparison of \"\" and \"\" returns " << string_compare("", "") << ".\n";
    std::cout << "The comparison of \"1\" and \"1\" returns " << string_compare("1", "1") << ".\n";
    std::cout << "The comparison of \"1\" and \"0\" returns " << string_compare("1", "0") << ".\n";
    std::cout << "The comparison of \"2\" and \"2\" returns " << string_compare("2", "2") << ".\n";
    std::cout << "The comparison of \"2\" and \"1\" returns " << string_compare("2", "1") << ".\n";
    std::cout << "The comparison of \"a\" and \"b\" returns " << string_compare("a", "b") << ".\n";
    std::cout << "The comparison of \"b\" and \"a\" returns " << string_compare("b", "a") << ".\n";
    std::cout << "The comparison of \"0\" and \"127\" returns " << string_compare("0", "127") << ".\n";
    std::cout << "The comparison of \"abc\" and \"abcd\" returns " << string_compare("abc", "abcd") << ".\n";
    std::cout << "The comparison of \"uiowerjsladfjkl\" and \"adfjlklnwero\" returns " << string_compare("uiowerjsladfjkl", "adfjlklnwero") << ".\n";
    std::cout << "The comparison of \"AbCdeEEE\" and \"aBcDEeee\" returns " << string_compare("AbCdeEEE", "aBcDEeee") << ".\n";
    std::cout << "The comparison of \"AbCdeEeE\" and \"asdfjklasdfjk\" returns " << string_compare("AbCdeEeE", "asdfjklasdfjk") << ".\n";
    return 0;
}
