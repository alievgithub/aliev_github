#include <iostream>
#include <vector>
using namespace std;

int main() {
  int x, n, sum, average;
  vector<int> res;
  cin >> n;
  vector<int> v(n);
  for (int& x : v) {
    cin >> x;
    sum += x;
  }
  average = sum / n;
  for (int j = 0; j < n; ++j) {
    if (v[j] > average)
      res.push_back(j);
  }
  cout << res.size() << endl;
  for (int k = 0; k < res.size(); ++k)
    cout << res[k] << endl;

  return 0;
}
