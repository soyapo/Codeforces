#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int N = 5e3;
int n, c1, c2, c3, c[3][N], temp;
int main(){
    fst
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>temp;
        if(temp == 1) c[0][c1] = i + 1, c1++;
        else if(temp == 2) c[1][c2] = i + 1, c2++;            
        else c[2][c3] = i + 1, c3++;
    }
    int mn = min(c1, min(c2, c3));
    cout<<mn<<endl;
    for(int i = 0; i < mn; i++){
            cout<<c[0][i]<<" "<<c[1][i]<<" "<<c[2][i];
        cout<<endl;
    }
    return 0;
}
/*
      ___                       ___           ___           ___           ___           ___     
     /\__\          ___        /\  \         /\__\         /\__\         /\  \         /\  \    
    /:/  /         /\  \      /::\  \       /:/  /        /:/  /        /::\  \       /::\  \   
   /:/__/          \:\  \    /:/\:\  \     /:/__/        /:/__/        /:/\:\  \     /:/\ \  \  
  /::\  \ ___      /::\__\  /:/  \:\  \   /::\  \ ___   /::\__\____   /::\~\:\  \   _\:\~\ \  \ 
 /:/\:\  /\__\  __/:/\/__/ /:/__/ \:\__\ /:/\:\  /\__\ /:/\:::::\__\ /:/\:\ \:\__\ /\ \:\ \ \__\
 \/__\:\/:/  / /\/:/  /    \:\  \  \/__/ \/__\:\/:/  / \/_|:|~~|~    \/__\:\/:/  / \:\ \:\ \/__/
      \::/  /  \::/__/      \:\  \            \::/  /     |:|  |          \::/  /   \:\ \:\__\  
      /:/  /    \:\__\       \:\  \           /:/  /      |:|  |          /:/  /     \:\/:/  /  
     /:/  /      \/__/        \:\__\         /:/  /       |:|  |         /:/  /       \::/  /   
     \/__/                     \/__/         \/__/         \|__|         \/__/         \/__/    
*/