	#include "pch.h"
	#include <iostream>
	#include <string>
	using namespace std;
	int main()
	{
		string s;
		bool flag = false;
		getline(cin, s);
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
				flag = true;
				break;
			}
		}
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		system("pause");
	}