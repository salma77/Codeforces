#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n=1,i,j=0;
	string s, t;
	cin >> s;
	cin >> t;
	for (i = 0; i < t.length(); i++) {
		if (s[j] == t[i]) {
			n++;
			j++;
		}
	}
	cout << n;
	return 0;
}
