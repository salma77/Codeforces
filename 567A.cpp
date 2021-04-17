#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n, arr[100000], min, max;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++){
        max = ((arr[i] - arr[0])>(arr[n-1] - arr[i]))? (arr[i] - arr[0]):(arr[n-1] - arr[i]);
        if(i == n-1)
            min = abs(arr[i]-arr[i-1]);
        else if(i == 0)
            min = abs(arr[i+1]-arr[i]);
        else
            min = abs(arr[i+1]-arr[i]) < abs(arr[i]-arr[i-1])? abs(arr[i]-arr[i+1]):abs(arr[i]-arr[i-1]);
        cout<< min <<" " << max << "\n";
    }
    return 0;
}