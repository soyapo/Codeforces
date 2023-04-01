#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, s, q, sc = 0; cin>>t>>s>>q;
    while(s<t) s*=q, sc++;
    cout<<sc;
    return 0;
}