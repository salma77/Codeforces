#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s,t;
	int flag = 1, i;
	getline(cin, s);
	getline(cin, t);
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
	system("pause");

}
