#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, a, b, c, d; cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(!(a | b | c | d))
            cout<<0<<'\n';
        else if(a & b & c & d)
            cout<<2<<'\n';
        else
            cout<<1<<'\n';
    }
    return 0;
}