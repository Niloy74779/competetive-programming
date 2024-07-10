///   ***   ---   |||		 In the name of ALLAH		|||   ---   ***   ///

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    fraction();
    optimize();
    int n;
    cin >> n;
    long long int arr[100];
    arr[1] = 0, arr[2] = 1;
    for(int i = 3; i<=n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout << arr[n] << endl;

	return 0;
}



