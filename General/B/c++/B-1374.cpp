#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    long long int t, n; cin>>t;
    while(t--){
        cin>>n;
        int c2 = 0, c3 = 0;
        while(n % 2 != 1)
            n /= 2, c2++;
        while(n % 3 == 0)
            n /= 3, c3++;
        cout<<((n > 1 || c2 > c3) ? -1 : 2 * c3 - c2)<<'\n';
    }
    return 0;
}