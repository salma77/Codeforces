#include <iostream>
#include<string>
#include <map>
using namespace std;
int main()
{
	int n;
	cin >> n;
	map< string, int > str;
	string s;

	for (int i = 0; i < n; i++) {
		cin >> s;
		if (str.count(s)==0) {
			cout << "OK"<< "\n";
			str[s] = 1;
		}
		else {
			cout << s << str[s] << "\n";
			str[s] += 1;

		}

	}

	system("pause");
}