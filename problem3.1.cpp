#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  int n, k,count=0;
  cin >> n >> k;

  vector<int> arr(n,0);

  for (int i = 0; i < n; i++) cin >> arr[i];

  for (int i = 0; i < n; i++) arr[i]>0 && arr[i]>=arr[k-1] && count++;

  cout << count;

  return 0;
}
