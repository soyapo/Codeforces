#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n; cin>>t;
    while(t--){
        cin>>n;
        if(n%2==1) cout<<(n+1)/2<<endl;
        else cout<<n/2<<endl;
    }   
    return 0;
}