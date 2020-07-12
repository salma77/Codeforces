
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	bool flag = true;
	cin >> s;
	for (int i = 1; i < s.length(); i++) {
		if (s[i] >= 97) {
			flag = false;
			break;
		}
	}
	if (flag) {
		if (s[0] >= 97) {
			s[0] -= 32;
			for (int i = 1; i < s.length(); i++) {
					s[i] += 32;
			}
		}
		else {
			for (int i = 0; i < s.length(); i++) {
					s[i] += 32;
			}
		}
		
	}
	cout << s;
	system("pause");
}
