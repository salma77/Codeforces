#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, q;
	vector <int> x, m;
	vector <int> ::iterator u;
	cin >> n;
	x.resize(n);
	for (int i = 0; i < n; i++)
		cin >> x[i];
	sort(x.begin(), x.end());
	cin >> q;
	m.resize(q);
	for (int i = 0; i < q; i++) {
		cin >> m[i];
		u = upper_bound(x.begin(), x.begin()+n, m[i]);
		cout << (u-x.begin()) << "\n";
	}
	return  0;
}
