#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int n, x[100000], max, min;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> x[i];
	min = x[0];
	max = x[0];
	for (int i = 0; i < n; i++) {
		for (int j= 0; j < n-1 ; j++) {
			if (i != j) {
				if (abs(x[i] - x[j]) > max)
					max = abs(x[i] - x[j]);
				if (abs(x[i] - x[j]) < min)
					min = abs(x[i] - x[j]);
			}
		}
		cout << min << " " << max<< "\n";
	}


	system("pause");
}