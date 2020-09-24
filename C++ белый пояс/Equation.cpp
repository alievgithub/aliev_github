#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a, b, c, d, x1, x2;
  cin >> a >> b >> c;
  d = b*b - 4*a*c;
  if (a != 0) {
    x1 = (-b - sqrt(d))/(2*a);
    x2 = (-b + sqrt(d))/(2*a);
  } else if (a == 0 && b == 0) {
    d = -1;
  } else {
    d = 0;
    x1 = -c/b;
  }
  if (d > 0) {
    cout << x1 << " " << x2;
  } else if (d == 0) {
    cout << x1;
  }
  return 0;
}
