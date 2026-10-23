#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t, s, q, sc = 0; cin>>t>>s>>q;
    while(s<t) s*=q, sc++;
    cout<<sc;
    return 0;
}