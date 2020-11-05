#include <iostream>
#include <vector>

using namespace std;

vector<int> Reversed(const vector<int>& nums) {
  vector<int> v = nums;
  for (int i = 0; i < nums.size() / 2; ++i) {
    int tmp = v[i];
    v[i] = v[nums.size() - i - 1];
    v[nums.size() - i - 1] = tmp;
  }

  return v;
}
/*
int main() {
  vector<int> numbers = {1, 5, 3, 4, 2};
  numbers = Reversed(numbers);

  for (auto x : numbers)
    cout << x << " ";
}
*/
