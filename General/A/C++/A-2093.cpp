#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t, n;
    cin>>t;
    while (t--){
        cin>>n;
        cout<<(n % 2 ? "YES\n" : "NO\n");
    }
    return 0;
}