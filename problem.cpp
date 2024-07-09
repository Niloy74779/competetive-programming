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
    
    int arr[1000],n,t;
    cin >> t;
    for(int x=0;x<t;x++){
        cin >> n;
        for(int i=1; i<=n; i++){
            cin >> arr[i];
        }
        int mx = 10000000;
        for(int i=1; i<=n; i++){
            for(int j =i+1; j<=n; j++){
                int x = (arr[i]+arr[j])+(j-i);
                if(x<mx) mx = x;
            }
        }
        cout << mx << endl;

    }


	return 0;
}



