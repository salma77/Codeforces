#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s, t;
	int flag = 1, i;
	cin >> s >> t;
	for (i = 0; i < s.length(); i++) {
		if (s[i] != t[s.length() - i - 1]) {
			flag = 0;
			break;
		}
	}
	if (flag)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
