#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int n, min=10000000, j, k;
	int m[100];
	cin >> n >> m[0];
	for (int i = 1; i < n; i++) {
		cin >> m[i];
		if (abs(m[i] - m[i - 1]) < min) {
			min=abs(m[i] - m[i - 1]);
			j = i;
			k = i + 1;
		}
	}
	if (abs(m[0] - m[n - 1]) < min)
		cout << "1 " << n << "\n";
	else
		cout << j << " " << k << "\n";
	return 0;
}
