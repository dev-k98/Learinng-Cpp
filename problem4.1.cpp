#include <iostream>
#include <vector>
#include <cctype>

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {

  string str;
  cin >> str;
  vector<char> arr;

  for (int i = 0; i < str.length() ; i++){
    char ch = tolower(str.at(i));
    if ((ch != 'a') &&(ch != 'y') && (ch != 'e') && (ch != 'i') && (ch != 'o') && (ch != 'u')) {
      arr.push_back(ch);
		}
	}

	for (int i = 0; i < arr.size(); i++){
		cout << "." << arr[i];
	}
	return 0;
}