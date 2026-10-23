#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t, n, x, mod; cin>>t;
    while(t--){
        cin>>n>>x;
        mod = (n - 2) % x == 0 ? 1 : 2;
        cout<<(n < 3 ? 1 : (n - 2) / x + mod)<<'\n';
    }
    return 0;
}