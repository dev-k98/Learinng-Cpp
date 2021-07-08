#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  long n, m, a;
  cin >> n >> m >> a;
  long long i = n % a != 0 ? n / a + 1 : n / a;
  long long j = m % a != 0 ? m / a + 1 : m / a;
  long long out = i * j;
  cout << out;
  return 0;
}
