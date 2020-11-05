#include <iostream>

using namespace std;

void UpdateIfGreater(int first, int& second) {
  if (first > second) {
    int tmp = first;
    first = second;
    second = tmp;
  }
}
/*
int main() {
  int a = 4;
  int b = 5;
  UpdateIfGreater(a, b);

  cout << a << " " << b << endl;

  return 0;
}
*/
