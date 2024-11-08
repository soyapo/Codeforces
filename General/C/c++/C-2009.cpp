#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, x, y, k; cin>>t;
    while(t--){
        cin>>x>>y>>k;
        int mx = (x / k) + (x % k ? 1 : 0), my = (y / k) + (y % k ? 1 : 0);
        cout<<(mx > my ? 2 * mx - 1 : 2 * my)<<'\n';
    }
    return 0;
}