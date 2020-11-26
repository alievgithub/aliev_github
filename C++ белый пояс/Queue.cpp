#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, num, res;
  string word;
  vector<int> queue;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> word;
    if (word != "WORRY_COUNT") {
      cin >> num;
      if (word == "COME") {
        if (num > 0) {
          for (int j = 0; j < num; ++j)
            queue.push_back(0);
        } else {
          for (int s = 0; s < abs(num); ++s)
            queue.pop_back();
        }
      } else if (word == "WORRY") {
        queue[num] = 1;
      } else if (word == "QUIET") {
        queue[num] = 0;
      }
    } else {
      res = 0;
      for (int k = 0; k < queue.size(); ++k) {
        if (queue[k] == 1)
          res++;
      }
      cout << res << endl;
    }
  }

  return 0;
}
