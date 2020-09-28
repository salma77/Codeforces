#include <iostream>
#include <set>
using namespace std;
int main()
{
	int a[100000], l[100000];
	set<int, greater <int> > s;
	int m, n, z;
	cin >> n >> m;
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	for (int i = n - 1; i >= 0; i--) {
		s.insert(a[i]);
		l[i] = s.size();
	}
	for (int i = 0; i < m; i++) {
		cin >> z;
		z--;
		cout << l[z] << "\n";
	}
	return  0;
}
