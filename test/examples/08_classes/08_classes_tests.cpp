#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("TEST ACCOUUNT BALANCE"){
	Account account;
	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test account balance set via constructor"){
	Account account(200);
	REQUIRE(account.get_balance() == 100);
}