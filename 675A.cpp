#include <iostream>
using namespace std;
int sign(long x) {
	if (x > 0)
		return 1;
	else if (x < 0)
		return -1;
	return 0;
}
int main()
{
	long a, b, c;
	cin >> a >> b >> c;
	if (a == b || (sign(b - a) == sign(c) && (b - a) % c == 0))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
