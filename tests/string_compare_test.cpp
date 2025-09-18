#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/string_compare.hpp"

TEST_CASE( "tests for string compare" ) {
    REQUIRE( string_compare("abc", "abcd") == -1 );
}
