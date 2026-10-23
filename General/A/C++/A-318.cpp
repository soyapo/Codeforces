#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    long long int n, k, even_start, a; cin>>n>>k;
    even_start = (n + (n % 2) + 2) / 2;
    if(k < even_start) cout<<(2 * k) - 1;
    else cout<< 2 * (k - (even_start - 1));
    return 0;
}