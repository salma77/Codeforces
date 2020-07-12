#include <iostream>
#include <string>
#include<map>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	map< string, string > data;
	for (int i = 0; i < m; i++) {
		string x, y;
		cin >> x >> y;
		data[x] = y;
	}
	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;
		string y;
		y = data[x];
		if (y.size() < x.size())
			cout << y << " ";
		else
			cout << x << " ";
	}


	system("pause");
}