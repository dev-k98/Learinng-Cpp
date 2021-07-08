//Way Too Long Words - codeforces

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  int n;
  cin >> n; 
  for (size_t i = 0; i < n; i++)
  {
    string str;
    cin >> str;

    if (str.length()>10) cout << str.at(0) << str.length() - 2 << str.at(str.length() - 1)<<endl;
    else cout << str << endl;
  }
}
