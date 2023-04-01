#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n; cin>>n;
    int s[n+1], t[n+1];
    for(int i = 1; i <= n; i++){
        cin>>s[i];
        t[s[i]] = i;
    }
    for(int i = 1; i <= n; i++) cout<<t[i]<<" ";
    return 0;
}