#include <iostream>
using namespace std;
int main()
{
	int a, b, ta, tb, hh, mm, sum = 0;
	char x;
	cin >> a >> ta >> b >> tb;
	cin >> hh >> x >> mm;
	int start = 60 * hh + mm;
	int begin = 5 * 60;
	int finish = 23 * 60 + 59;
	for (int i = begin; i <= finish; i += b) {
		if (i + tb > start && i < ta + start)
			sum++;
	}
	cout << sum;
	return 0;
}
