#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, n; cin>>t;
    while(t--){
        cin>>n;
        cout<<(!(360 % (180 - n)) ? "YES\n" : "NO\n");   
    }
    return 0;
}