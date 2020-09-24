#include <iostream>
using namespace std;

int main() {
  int a, b, steps;
  cin >> a >> b;
  steps = b - a + 1;
  for (int i = 0; i < steps; ++i) {
    if (a % 2 == 0) {
      cout << a << " ";
    } else {
      // x - нечётное число
    }
    a++;
  }
  return 0;
}
