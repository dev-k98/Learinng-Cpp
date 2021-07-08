#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int n;
  cin >> n;
  int count = 0;
  for (int i = 0; i < n; i++){
    int j, k , l;
    cin >> j >> k >> l;
    (j == 1 && k == 1) || (l == 1 && k == 1) || (j == 1 && l == 1) ? count++ : count;
  }
  cout << count;
  return 0;
  
}