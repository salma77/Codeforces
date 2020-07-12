#include <iostream>
using namespace std;
int main()
{
	int i, j, n, x, cards[1000], sum=0, m=0;
	cin >> n >> x;
	for (i = 0; i < n; i++) {
		cin >> cards[i];
		sum += cards[i];
	}
	int sum2 = fabs(sum);
	if (sum == 0)
		m = 0;
	else if (sum2 <= x)
		m++;
	else {
		while (sum2 > x){
			sum2-= x;
			m++;
			if (sum2 <= x) {
				m++;
				break;
			}
		}
	}
	cout << m;
	return 0;
}
