#include <iostream>
using namespace std;
int main()
{
	int y;
	cin >> y;
	while (1) {
		y += 1;
		int th = y / 1000;
		int hund = (y / 100) % 10;
		int tens = (y / 10) % 10;
		int units = y % 10;
		if (th != hund && hund != tens && tens != units && hund != units && th != tens && th != units)
			break;
	}
	cout << y;
	return  0;
}
