#include <iostream>
#include <set>

using namespace std;

int main() {
  int n;
  string word;
  set<string> s;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> word;
    s.insert(word);
  }
  cout << s.size() << endl;

  return 0;
}
