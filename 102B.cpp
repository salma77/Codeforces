#include <iostream>
#include <string>
using namespace std;
int main()
{
	string n;
	int c = 0;
	cin >> n;
	if (n.length() < 2) //check if number already has 1 digit
		cout << c;
	else {
		long double x = 11; //because to_string function takes only certain data types
		while (x >= 10) {
			x = 0;
			for (int i = 0; i < n.length(); i++)
				x += (n[i] - '0');
			n = to_string(x);
			c++;
		}
		cout << c;
	}
	return 0;
}