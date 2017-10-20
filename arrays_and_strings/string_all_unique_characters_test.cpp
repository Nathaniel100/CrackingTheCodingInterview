//
// Created by 吴凡 on 2017/10/18.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "string_all_unique_characters.h"

using namespace Catch;

TEST_CASE("StringAllUniqueCharacters") {
  SECTION("Empty string") {
    std::string s;
    REQUIRE(ctci::hasAllUniqueCharacters(s));
  }

  SECTION("One length string") {
    std::string s("a");
    REQUIRE(ctci::hasAllUniqueCharacters(s));
  }

  SECTION("No same characters string") {
    std::string s("abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    REQUIRE(ctci::hasAllUniqueCharacters(s));
  }

  SECTION("has same characters") {
    std::string s("abcda");
    REQUIRE_FALSE(ctci::hasAllUniqueCharacters(s));
  }

  SECTION("has some same characters") {
    std::string s("abcdabefhjlkajalifu012098znnfjiaosf");
    REQUIRE_FALSE(ctci::hasAllUniqueCharacters(s));
  }
}

TEST_CASE("hasAllUniqueCharacters_noAdditionalDataStructure") {
  SECTION("Empty string") {
    std::string s;
    REQUIRE(ctci::hasAllUniqueCharacters_noAdditionalDataStructure(s));
  }

  SECTION("One length string") {
    std::string s("a");
    REQUIRE(ctci::hasAllUniqueCharacters_noAdditionalDataStructure(s));
  }

  SECTION("No same characters string") {
    std::string s("abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    REQUIRE(ctci::hasAllUniqueCharacters_noAdditionalDataStructure(s));
  }

  SECTION("has same characters") {
    std::string s("abcda");
    REQUIRE_FALSE(ctci::hasAllUniqueCharacters_noAdditionalDataStructure(s));
  }

  SECTION("has some same characters") {
    std::string s("abcdabefhjlkajalifu012098znnfjiaosf");
    REQUIRE_FALSE(ctci::hasAllUniqueCharacters_noAdditionalDataStructure(s));
  }
}
