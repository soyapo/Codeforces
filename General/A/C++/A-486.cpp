#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    long long int n; cin>>n;
    n = n % 2 == 0 ? n / 2 : ((n - 1) / 2) - n;
    cout<<n;
    return 0;
}