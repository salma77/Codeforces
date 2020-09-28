#include <iostream>
using namespace std;
int main()
{
	int n, a, criminals[101], c = 0;
	cin >> n >> a;
	for (int i = 0; i < n; i++)
		cin >> criminals[i];
	a--;
	if (criminals[a])
		c++;
	for (int i = 1 ; i < n; i++) {
		if ((a - i) >= 0 || a + i < n) {
			if ((a - i) >= 0 && (i + a) < n) {
				if (criminals[a - i] && criminals[i + a])
					c += 2;
			}
			else if ((i + a) < n) {
				if (criminals[a + i])
					c++;
			}
			else if ((a - i) >= 0) {
				if (criminals[a - i])
					c++;
			}
		}
	}
	cout << c;
	return 0;
}
