#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s, pattern="hello";
	int pos=0;
	cin >> s;
	if(s.length()>=5)
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == pattern[pos]) {
				pos++;
				if (pos == 5)
					break;	
			}	
		}
	if (pos == 5)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
