










/*



// Memoization-Method (recursive)

#include <bits/stdc++.h>
using namespace std;

const int N = 105;
int dp[N][N],row,col;
int uniquePath(int n, int m){
    if(n==0 && m==0) return 1;
    if(dp[n][m] != -1) return dp[n][m];
    int ans = 0;
    if(n > 0) ans+= uniquePath(n-1,m);
    if(m > 0) ans+= uniquePath(n, m-1);
    dp[n][m] = ans;
    return ans;
}

int main(){
    memset(dp,-1,sizeof(dp));
    cin >> row >> col;
    cout << uniquePath(row-1,col-1) << endl;
    return 0;
}


============================================================================================================================================



// Tabulation-Method (iterative)

#include <bits/stdc++.h>
using namespace std;

const int N = 105;
int dp[N][N],row,col; 

int main(){
    memset(dp,-1,sizeof(dp));
    cin >> row >> col;
    dp[0][0] = 1;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(i == 0 && j== 0) continue;
            int ans = 0;
            if(i > 0) ans+= dp[i-1][j];
            if(j > 0) ans+= dp[i][j-1];
            dp[i][j] = ans;
        }
    }
    cout << dp[row-1][col-1] << endl;
    return 0;
}




*/




