#include <bits/stdc++.h>
using namespace std;
const int mn = 2e5 + 2;
long long int a[mn], b[mn];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m, l, r, mid; cin>>n>>m;
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0; i < m; i++) cin>>b[i];
    sort(a, a+n);
    for(int i = 0; i < m; i++){
        l = 0, r = n;
        while(r - l > 1){
            mid = (r + l) / 2;
            if(a[mid] > b[i]) r = mid;
            else l = mid;
        }
        if(a[l]>b[i]) cout<<"0 ";
        else cout<<l+1<<" "; 
    }
    return 0;
}