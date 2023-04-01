#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long long int t, a, b; cin>>t;
    while(t--){
        cin>>a>>b;
        if(a % b != 0) cout<<b - (a % b)<<endl;
        else cout<<0<<endl;
    }
    return 0;
}