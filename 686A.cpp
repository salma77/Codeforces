#include <iostream>
using namespace std;
int main()
{
	long long int n, x, d, y = 0;
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
	system("pause");
}