#include <iostream>

using namespace std;

int Factorial(int x) {
  int fact = 1;
  for (int i = 1; i < x + 1; ++i) {
    fact *= i;
  }
  if (x < 0) {
    return 1;
  } else {
    return fact;
  }
}
/*
int main() {
  cout << Factorial(-2);
  return 0;
}
*/
