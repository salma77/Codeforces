#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	string s = "aystelxmiowfhnjuzrcdpvkgbq";
	string sout = "";
	
	for (int i = 0; i < n; i++) {
		if (sout.length() == n)
			break;
		else if(sout.length() < n)
			sout += s.substr(0, k);
		else if (sout.length() > n)
			sout.erase(n);
	}


	cout << sout;

	system("pause");
}