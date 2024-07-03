#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main(){
    optimize();
    fraction();
    int n;
    cin >> n;
    int arr[n+4];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    for(int i = n-1; i>=0; i--){
        cout << arr[i] << " ";
    }

    return 0;
}