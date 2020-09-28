#include <iostream>
using namespace std;
int main()
{
	int s[7], l[6], r[6], p[6];
	for (int i = 1; i < 5; i++) 
		cin >> l[i] >> s[i] >> r[i] >> p[i];
	s[0] = s[4]; l[0] = l[4]; r[0] = r[4]; p[0] = p[4];
	s[5] = s[1]; l[5] = l[1]; r[5] = r[1]; p[5] = p[1]; s[6] = 0;
	for (int i = 1; i < 5; i++) {
		if (p[i]) {
			if (i >= 2){
				if (s[i] || l[i] || r[i] || r[i - 1] || l[i + 1] || s[i + 2] || s[i - 2]) {
					cout << "YES";
					break;
				}
			}
			else
				if (s[i] || l[i] || r[i] || r[i - 1] || l[i + 1] || s[i + 2]) {
					cout << "YES";
					break;
				}

		}
		if (i >= 4)
			cout << "NO";
	}
	return 0;
}
