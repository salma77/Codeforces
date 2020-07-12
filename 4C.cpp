#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string  str[100000];
	int  items[100000];
	
	for (int i = 0; i < n; i++) {
		cin >> str[i];
		items[i] = 0;
		if (find(0, i, str[i]) != -1)
			items[i]++;
		
	}
	for (int i = 0; i < n; i++) {
		if (find(0, i, str[i]) != -1)
			cout << "OK\n";
		else
		cout << str[i] << items[i] << "\n";
	}





	system("pause");
}