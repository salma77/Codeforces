#include <iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		char c = tolower(s[i]);
		if (c == 'a' || c == 'o' || c == 'u' || c == 'y' || c == 'e' || c == 'i')
			continue;
		else
			cout << "." << c;
	}


	system("pause");
}
