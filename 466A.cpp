#include <iostream>
using namespace std;
int main()
{
	int n, m, a, b, rubles = 0;
	cin >> n >> m >> a >> b;
	if (n > m) {
		if (a * m <= b)
			rubles = a * n;
		else {
			if (a < b) {
				rubles += a * (n % m);
				n -= (n % m);
			}
			while (n > 0) {
				rubles += b;
				n -= m;
			}
		}
	}
	else {
		if (a * n < b)
			rubles = a * n;
		else
			rubles = b;
	}
	cout << rubles;
	return 0;
}
