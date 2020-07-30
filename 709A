#include <iostream>
using namespace std;
int main()
{
	int n, b, d, a;
	cin >> n >> b >> d;
	int x = 0, y = 0, i = 0;
	while (i < n) {
		cin >> a;
		if (a <= b) {
			y += a;
			if (y > d) {
				x++;
				y = 0;
			}
		}
		i++;
	}
	cout << x;
	return 0;
}
