#include <iostream>
using namespace std;

int main() {
  int count = 0;
  string x;
  cin >> x;
  for (int i = 0; i < x.size(); ++i) {
    if (x[i] == 'f')
      count++;
    if (count == 2) {
      cout << i;
      break;
    }
  }
  if (count == 1)
    cout << -1;
  else if (count != 2)
    cout << -2;
  return 0;
}
