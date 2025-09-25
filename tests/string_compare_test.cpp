#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/string_compare.hpp"

TEST_CASE( "tests for string compare" ) {
    REQUIRE( string_compare("", "") == 0 );
    REQUIRE( string_compare("1", "1") == 0 );
    REQUIRE( string_compare("1", "0") == 1 );
    REQUIRE( string_compare("2", "2") == 0 );
    REQUIRE( string_compare("2", "1") == 1 );
    REQUIRE( string_compare("a", "b") == -1 );
    REQUIRE( string_compare("b", "a") == 1 );
    REQUIRE( string_compare("0", "127") == -1 );
    REQUIRE( string_compare("abc", "abcd") == -1 );
    REQUIRE( string_compare("uiowerjsladfjkl", "adfjlklnwero") == 1 );
    REQUIRE( string_compare("AbCdeEEE", "aBcDEeee") == 0 );
    REQUIRE( string_compare("AbCdeEeE", "asdfjklasdfjk") == -1 );
}
