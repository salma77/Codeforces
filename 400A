#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string s;
	for (int i = 0; i < t; i++) {
		int sum = 0, flag0 = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
		cin >> s;
		if (s == "XXXXXXXXXXXX")
			cout << "6 1x12 2x6 3x4 4x3 6x2 12x1\n";
		else if (s == "OOOOOOOOOOOO")
			cout << "0\n";
		else {
			//----------------2x6-------------------
			for (int i = 0; i < 6; i++) 
				if (s[i + 6] == 'X' && s[i] == 'X') {
					flag1 = 1; //2x6
					sum++;
					break;
				}
			for (int i = 0, j = 4; i < 4 && j < 8; i++, j++) 
				if (s[i] == 'X' && s[j] == 'X')
					if (s[j + 4] == 'X') {
						flag2 = 1; //3x4
						sum++;
						break;
					}
			//----------------4x3-------------------
			for (int i = 0, j = 3; i < 3 && j < 6; i++, j++)
				if (s[i] == 'X' && s[j] == 'X')
					if(s[j+3]=='X')
						if (s[j + 6] == 'X') {
							flag3 = 1; 
							sum++;
							break;
						}
			//----------------6x2--------------------
			int count_odd = 0, count_even = 0;
			for (int i = 0, j = 1; i < 12 && j < 12; i += 2, j += 2) {
				if (s[i] == 'X')
					count_even++;
				if (s[j] == 'X')
					count_odd++;
			}
			if (count_even == 6 || count_odd == 6) {
				sum++;
				flag4 = 1;
			}
			//----------------1x12-------------------
			for (int i = 0; i < 12; i++) 
				if (s[i] == 'X') {
					flag0 = 1;
					sum++;
					break;
				}
			//---------------------------------------
			cout << sum;
			//printing
			if (flag0)
				cout << " 1x12";
			if (flag1)
				cout << " 2x6";
			if (flag2)
				cout << " 3x4";
			if (flag3)
				cout << " 4x3";
			if (flag4)
				cout << " 6x2";
			cout << "\n";
		}
	}
	return 0;
}
