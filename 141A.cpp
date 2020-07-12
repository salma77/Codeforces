#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string host, gifted, letter, mash;
	getline(cin, host);
	getline(cin, gifted);
	getline(cin, letter);
	mash = host + gifted;
	sort(mash.begin(), mash.end());
	sort(letter.begin(), letter.end());


	if (mash==letter)
		cout << "YES";
	else
		cout << "NO";

	system("pause");
}