#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> PalindromFilter(vector<string> words, int minLength) {
  bool PolTest = true;
  vector<string> answer;
  for (int i = 0; i < words.size(); ++i) {
    for (int j = 0; j < words[i].size() / 2; ++j) {
      if (words[i][j] != words[i][words[i].size() - j - 1]) {
        PolTest = false;
      }
    }
    if (PolTest == true && words[i].size() >= minLength)
      answer.push_back(words[i]);
    PolTest = true;
  }
  return answer;
}
/*
int main() {
  vector<string> answer = PalindromFilter({"weeeew", "bro", "code"}, 4);
  for (int i = 0; i < answer.size(); ++i)
    cout << answer[i] << ' ';
  return 0;
}
*/
