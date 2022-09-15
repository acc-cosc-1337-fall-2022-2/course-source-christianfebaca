#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is overtime function")
{
	REQUIRE(is_overtime(41) == true);
	REQUIRE(is_overtime(40) == false):
	REQUIRE(is_overtime(30) == false);

}
{
REQUIRE(get_generation(2030)) == "Invalid Option";
REQUIRE(get_generation(2010)) == "Centennial";
REQUIRE(get_generation(1980)) == "Millennial";
REQUIRE(get_generation(1970)) == "Generation X";
REQUIRE(get_generation(1950)) == "Baby Boomer";
REQUIRE(get_generation(1930)) == "Silent Generation";
REQUIRE(get_generation(1800)) == "Invalid Option";
}

TEST_CASE("Test switch menu function")
{
	REQUIRE(menu(1)) == "Option 1";
	REQUIRE(menu(2)) == "Option 2";
	REQUIRE(menu(3)) == "Option 3";
	REQUIRE(menu(4)) == "Option 4";
}