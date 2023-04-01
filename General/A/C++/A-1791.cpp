#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    string s = "codeforces";
    map <char, int> cf;
    for(int i = 0; i < 10; i++)
        cf[s[i]]++;
    int t; cin>>t;
    while(t--){
        char c; cin>>c;
        cout<<(cf[c] ? "YES\n" : "NO\n");
    }
    return 0;
}