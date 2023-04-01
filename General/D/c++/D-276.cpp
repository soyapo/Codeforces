#include <bits/stdc++.h>
using namespace std;
int main(){
    long long mx = 0, l, r;
    cin>>l>>r;
    for(long long i = l; i <= r; i++){
        for(long long j = i; j <= r; j++) mx = max(mx, i ^ j);
    }
    cout<<mx;
}