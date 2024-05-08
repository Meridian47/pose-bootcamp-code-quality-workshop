#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>

#include "address_book.hpp"

TEST_CASE("entries can be added and removed") {
	address_book ab;
	CHECK_FALSE(ab.has_entry("Jane Doe"));
	ab.add_entry("Jane Doe");
	CHECK(ab.has_entry("Jane Doe"));
	ab.remove_entry("Jane Doe");
	CHECK_FALSE(ab.has_entry("Jane Doe"));
}

// TEST_CASE("check if name has 1 to 100 characters") {
// 	std::string teststring ("",0);
// 	CHECK(teststring.length == 0)
// 	CHECK_THROWS(teststring)
// 
// }