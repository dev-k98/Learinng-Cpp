#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

  int n,count=0;
  cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		if (str.at(0) == '+' || str.at(2) == '+')
			count++;
		else
      count--;
    }
    cout << count << endl;
    return 0;
}