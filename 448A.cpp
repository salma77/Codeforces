#include <iostream>
using namespace std;
int main()
{
	int n, a1, a2, a3, b1, b2, b3;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
	if ((ceil((a1 + a2 + a3) / 5.0) + ceil((b1 + b2 + b3) / 10.0)) <= n)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
