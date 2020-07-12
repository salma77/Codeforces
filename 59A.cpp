#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
int mymin(int arr[100], int d, int y) {
	int sum = 0, z = 0;
	for (int i = y; i < d; i++) {
		sum += arr[i];
		if (arr[i] == 0)
			z++;
		if (sum >= d) {
			return (i - z);
		}
	}
}
int minimum(int w[100],int n,int d) {
	int m[100], a[100], sum = 0,c=n-d+1,mini=100,y=1;
	for (int i = 0; i < 100; i++) { a[i] = 0; }
	for (int i = 0; i < 100; i++) { m[i] = 100; }
	for (int i = 0; i < n; i++) {
		int v = w[i];
		a[v]++;
	}
	for (int i = 1; i <= c; i++) {
		y++;
		m[y] = mymin(a, d, y);
		if (m[y] < mini)
			mini = m[y];
	}
	return mini;

}
int main()
{
	int i, n, k, d, t, a[100],m[100],j;
	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> n >> k >> d;

		for (j = 0; j < n; j++) { cin >> a[i]; }

		m[i] = minimum(a, n, d);
	}
	for (i = 0; i < t; i++) {
		cout << m[i] << endl;
	}
	system("pause");
}
