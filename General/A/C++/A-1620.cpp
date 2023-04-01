#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n; cin>>t;
    string s;
    while(t--){
        cin>>s;
        n = count(s.begin(), s.end(), 'N');
        if(n != 1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}