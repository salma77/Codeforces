#include "pch.h"
#include <iostream>
# include <algorithm>
using namespace std;
int main()
{
	int  n, k, l, c, d, p, nl, np,min1;
	cin >> n>> k>> l>> c>> d>> p>> nl>> np;
	int drinks=(k*l)/nl, lime=c*d, salt=p/np;
	min1 = min(drinks, lime);
	cout << min(min1, salt)/n;
	system("pause");
} 