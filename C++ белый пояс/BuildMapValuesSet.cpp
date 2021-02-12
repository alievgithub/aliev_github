#include <iostream>
#include <string>
#include <map>

using namespace std;

set<string> BuildMapValuesSet(const map<int, string>& m) {
  set<string> v;
  for (const auto& x : m) {
    v.insert(x.second);
  }
  return v;
}
