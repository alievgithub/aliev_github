#include <iostream>
#include <string>

using namespace std;

bool IsPalindrom(string x) {
  bool ans = true;
  int size = x.size() / 2;
  for (int i = 0; i < size; ++i) {
    if (x[i] == x[x.size() - i - 1]) {
      ans = true;
    } else {
      ans = false;
      break;
    }
  }
  return ans;
}
/*
int main() {
  cout << IsPalindrom("madam");
  return 0;
}
*/
