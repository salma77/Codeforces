#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t, n[44], m[44];
	string s[44];
	cin >> t;
	for (int i = 0; i < t; i++)
		m[i] = 26;
	for (int i = 0; i < t; i++) {
		cin >> n[i];
		cin >> s[i];
		for (int j = 0; j < s[i].length(); j++) {
			if (s[i][j] == 65 + j && s[i][j + 1] == 65 + j + 1)
				continue;
			else
				m[i]++;
		}
	}
	for (int i = 0; i < t; i++) 
		cout<< m[i] << endl;
	return 0;
}
