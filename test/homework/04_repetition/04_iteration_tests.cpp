#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Factorial number function parameter value test: ")
{
	REQUIRE(3 == 6);
	REQUIRE(5 == 120);
	REQUIRE(6 == 720);
}

TEST_CASE("Greatest Common Divisor parameter value test: ")
{
	REQUIRE(5 == 5);
	REQUIRE(15 == 5);
	REQUIRE(21 == 7);
	REQUIRE(28 == 7);
	REQUIRE(25 == 25);
	REQUIRE(100 == 25);
}