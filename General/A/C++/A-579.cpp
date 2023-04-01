#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int n, one = 0; cin>>n;
    while(n > 0)
        one = (n % 2 ? one + 1 : one), n /= 2;
    cout<<one;
    return 0;
}