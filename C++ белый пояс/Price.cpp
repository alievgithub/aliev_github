#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double n, a, b, x, y;
  cin >> n >> a >> b >> x >> y;
  if (n > a && n <= b) {
    n *= 1 - x/100;
  } else if (n > b) {
    n *= 1 - y/100;
  }
  cout << n;
  return 0;
}
