#include <bits/stdc++.h>
using namespace std;
const long long int mn = 1e5 + 2;
long long int crd[mn];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long long int n, d, l, r, mid, bi, a = 0; cin>>n>>d;
    for(long long int i = 0; i < n; i++) cin>>crd[i];
    for(long long int i = 0; i < n - 2; i++){
        l = i + 2, r = n, bi = crd[i] + d;
        while(r - l > 1){
            mid = (r+l)/2;
            if(crd[mid] > bi) r = mid;
            else l = mid;
        }
        if(crd[l] - crd[i] <= d) a += ((l - i) * (l - i - 1)) /2;
    }
    cout<<a;
    return 0;
}