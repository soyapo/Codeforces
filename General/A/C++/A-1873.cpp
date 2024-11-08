#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        cout<<((s == "bca" || s == "cab") ? "no\n" : "yes\n");
    }
    return 0;
}