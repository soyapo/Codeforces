#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, s = 0; cin>>n;
    for(int i = 2; i < n; i++) s += i*(i+1);
    cout<<s<<endl;
    n--;
    cout<<n * (n+1) * (n+2) / 3 - 2;
    return 0;
}