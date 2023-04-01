#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n, cne = 0, tmp; cin>>t;
    while(t--){
        cne = 0;
        cin>>n;
        for(int i = 0; i < 2 * n; i++){
            cin>>tmp;
            cne = tmp%2==0 ? cne+1 : cne;
        }
        if(cne-n==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}