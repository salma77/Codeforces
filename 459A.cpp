#include <iostream>
using namespace std;
int main()
{
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	float side;
	if (y1 == y2) {
		side = abs(x1 - x2);
		cout << x1 << " " << y1 + side << " " << x2 << " " << y2 + side;
	}
	else if (x1 == x2) {
		side = abs(y1 - y2);
		cout << x1 + side << " " << y1 << " " << x2 + side << " " << y2;
	}
	else {
		float d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
		float l = sqrt(d / 2);
		float tan = (y2 - y1) / (x2 - x1);
		if ((tan != -1 && tan != 1) || 2 * l * l != d)
			cout << "-1";
		else
			cout << x1 << " " << y2 << " " << x2 << " " << y1;
	}
	return 0;
}
