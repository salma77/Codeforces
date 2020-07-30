#include <iostream>
using namespace std;
int main()
{
	long long int x, d;
	int n, y = 0;
	char i;
	cin >> n >> x;
	while (n != 0) {
		cin >> i >> d;
		if (i == '+') {
			x += d;
		}
		else {
			if (d <= x)
				x -= d;
			else
				y++;

		}
		n--;
	}
	cout << x << " " << y;
	return 0;
}
