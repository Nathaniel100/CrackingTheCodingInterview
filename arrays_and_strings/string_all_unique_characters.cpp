//
// Created by 吴凡 on 2017/10/18.
//

/// Implement an algorithm to determine if a string has all unique characters.
/// What if you can not use additional data structures?

#include <string>
#include "string_all_unique_characters.h"

namespace ctci {

// O(n), n is the length of string
bool hasAllUniqueCharacters(const std::string &s) {
  int counts[256] = {0};
  std::for_each(s.begin(), s.end(), [&](char c) {
    counts[c]++;
  });
  return std::find_if(counts, counts + 255, [](int v) { return v > 1; })
      == counts + 255;
}

// O(nlogn), n is the length of string
bool hasAllUniqueCharacters_noAdditionalDataStructure(std::string s) {
  std::sort(s.begin(), s.end()); // sort may use additional data structure
  return std::adjacent_find(s.begin(), s.end()) == s.end();
}

}

