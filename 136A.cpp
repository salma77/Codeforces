#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int n, a[100], b[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[a[i]-1] = i+1;
	}
	for (int i = 0; i < n; i++) {
		cout<< b[i]<<" ";
	}
	system("pause");
}