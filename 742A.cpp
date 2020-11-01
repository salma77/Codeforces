#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long int n;
    cin >> n;
    int mynum = ((int) pow(8, n)) % 10;
    cout << mynum;
    return 0;
}