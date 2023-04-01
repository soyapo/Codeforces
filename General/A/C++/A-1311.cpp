#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, a, b; cin>>t;
    while(t--){
        cin>>a>>b;
        if(a == b) 
            cout<<0<<'\n';
        else if(a > b)
            cout<<(a % 2 == b % 2 ? 1 : 2)<<'\n';
        else
            cout<<(a % 2 == b % 2 ? 2 : 1)<<'\n';
    }
    return 0;
}