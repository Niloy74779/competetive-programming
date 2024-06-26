// https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)cin >> arr[i];
    sort(arr.begin(),arr.end());
    cout << "The Maximum Element Of the array is = " << arr[0] << endl;
    cout << "The Minimum Element Of the array is = " << arr[n-1] << endl;
    return 0;
}