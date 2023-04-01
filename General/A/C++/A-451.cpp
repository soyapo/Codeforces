#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m, a = 0; cin>>n>>m;
    while(n * m > 0) n-=1, m-=1, a = 1 - a;
    if(a) cout<<"Akshat";
    else cout<<"Malvika";
    return 0;
}