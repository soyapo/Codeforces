#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, n, s, m, i0, i1; cin>>t;
    while(t--){
        cin>>n>>s>>m;
        int prv = 0, ok = 0;
        for(int i = 0; i < n; i++){
            cin>>i0>>i1;
            if(i0 - prv >= s) ok = 1;
            prv = i1;
        }
        if(m - prv >= s) ok = 1;
        cout<<(ok ? "YES\n" : "NO\n");
    }   
    return 0;
}