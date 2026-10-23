#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    long long int n, m; cin>>n>>m; 
    if(n==1) cout<<1;
    else if(m - 1 < n - m) cout<< m+1;
    else cout<<m-1;
}