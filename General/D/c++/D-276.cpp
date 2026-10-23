#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    long long mx = 0, l, r;
    cin>>l>>r;
    for(long long x = l ^ r; x; x >>= 1) mx = mx << 1 | 1;
    cout<<mx;
}