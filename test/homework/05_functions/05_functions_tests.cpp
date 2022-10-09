#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"func.h"
#include"main.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify get gc content function")
{
	REQUIRE(get_gc_content(AGCTATAG == .375))
}

TEST_CASE("Test function get_reverse_string")
{
	REQUIRE()
}


TEST_CASE("Test function get dna complement")
{
	REQUIRE()
}