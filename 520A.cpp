#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, i, flag=1;
	string s;
	cin >> n;
	cin >> s;
	if (n < 26)
		cout << "NO";
	else {
		string temp1="abcdefghijklmnopqrstuvwxyz", temp2= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		for (i = 0; i < 26; i++) {
			if (s.find(temp1[i]) != string::npos || s.find(temp2[i]) != string::npos)
				continue;
			else {
				flag=0;
				break;
			}
		}
		if (flag)
			cout << "YES";
		else
			cout << "NO";
	}
}
