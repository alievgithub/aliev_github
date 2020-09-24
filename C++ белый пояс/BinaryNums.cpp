#include <iostream>
#include <vector>
using namespace std;

int main() {
  int x, n;
  vector<int> v;
  cin >> n;
  while (n != 0) {
    x = n % 2;
    v.push_back(x);
    n /= 2;
  }
  for (int i = v.size() - 1; i >= 0; --i)
    cout << v[i];
  cout << endl;
  return 0;
}
