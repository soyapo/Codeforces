#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    long long int t, n, k; cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<(n % 2 == k % 2 ? (k * k <= n ? "YES\n" : "NO\n") : "NO\n");
    }
    return 0;
}