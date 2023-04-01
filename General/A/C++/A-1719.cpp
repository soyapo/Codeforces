#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, n, m; cin>>t;
    while(t--){
        cin>>n>>m;
        cout<<(!((n + m) % 2) ? "Tonya\n" : "Burenkan\n");
    }
    return 0;
}