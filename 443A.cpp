#include "pch.h"
#include <iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	int n = 0;
	for (int i = 0; i < s.length(); i++) {
		if(s[i]!=',' && s[i]!=' ')
			for (int j = 0; j < s.length(); j++) {
				if (s[i] == s[j])
					continue;
				else
					n++;
			}
	}
	cout << n;
	system("pause");
}