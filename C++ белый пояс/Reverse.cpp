#include <iostream>
#include <vector>

using namespace std;

void Reverse(vector<int>& nums) {
  for (int i = 0; i < nums.size() / 2; ++i) {
    int tmp = nums[i];
    nums[i] = nums[nums.size() - i - 1];
    nums[nums.size() - i - 1] = tmp;
  }
}
/*
int main() {
  vector<int> numbers = {1, 5, 3, 4, 2};
  Reverse(numbers);

  for (auto x : numbers)
    cout << x << " ";
}
*/
