#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t; cin>>t;
    while(t--){
        long long int n, k, s = 2e9;
        cin>>n>>k;
        long long int tot = n * k + n * (n - 1) / 2, l = 1, r = n;
        while(l < r){
            long long int mid = (l + r + 1) / 2;
            if(2 * (mid * k + mid * (mid - 1) / 2) <= tot) l = mid;
            else r = mid - 1;
        }
        for(long long int i = l; i <= min(l + 1, n); i++)
            s = min(s, abs(2 * (i * k + i * (i - 1) / 2) - tot));
        cout<<s<<'\n';
    }
    return 0;
}