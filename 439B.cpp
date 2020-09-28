#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	long long int n, x, sum = 0;
	vector<long long int> c;
	cin >> n >> x;
	c.resize(n);
	for (int i = 0; i < n; i++)
		cin >> c[i];
	sort(c.begin(), c.end());
	for (int i = 0; i < n; i++) {
		if (x > 1) {
			sum += (x * c[i]);
			x--;
		}
		else
			sum += (x * c[i]);
	}
	cout << sum;
	return  0;
}
