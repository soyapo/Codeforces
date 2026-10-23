#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int n, a, b, cap = 0, count = 0; cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        count = count - a + b, cap = max(cap, count);
    }
    cout<<cap;
    return 0;
}