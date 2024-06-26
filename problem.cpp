#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    for(int i=0; i<3; i++){
        cin >> x >> y;
        if(y<x and y>0){
            int temp = x;
            x = y;
            y = temp;
        }
        int sum = 0;
        for(int j=x; j<=y; j++ ){
            sum+=j;
        }
    }
    return 0;
}