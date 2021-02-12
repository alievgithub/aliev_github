#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, int> BuildCharCounters(string word) {
  map<char, int> counter;
  for (char letter : word) {
    counter[letter]++;
  }

  return counter;
}

int main() {
  int n;
  string word1, word2;
  map<char, int> counter1, counter2;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> word1 >> word2;
    counter1 = BuildCharCounters(word1);
    counter2 = BuildCharCounters(word2);
    if (counter1 == counter2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
