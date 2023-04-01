#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int m, n; cin>>n>>m;
    int ans = (((n+1)/2)+m-1) / m * m;
    if(ans>n) cout<<"-1";
    else cout<<ans;
    return 0;
}