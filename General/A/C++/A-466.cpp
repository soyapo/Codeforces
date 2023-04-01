#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int m, n, a, b; cin>>n>>m>>a>>b;
    if(m * a >= b) cout<<(n/m*b) + min(((n % m) * a), b);
    else cout<<a * n;
    return 0;
}