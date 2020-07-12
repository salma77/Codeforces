#include <iostream>
using namespace std;
int main()
{
	float n, t, k, d;
	cin >> n >> t >> k >> d;
	float time1 = n * t / k;
	float time2 = ((n * t) / (2 * k))+ d;
	if (time2<time1)
		cout << "YES";
	else
		cout << "NO";

	system("pause");
}