#include <bits/stdc++.h>
using namespace std;
const int mn = 2e5 + 10;
long long int a[mn] , b[mn] , ans[mn], mid;
int bs(int l , int r , long long x){
    mid = (l + r) / 2 ;
    if(ans[mid] == x) return mid ;
    else if(ans[mid] > x && ans[mid - 1] < x) return mid;
    if(ans[mid] < x) return bs(mid + 1, r , x) ;
    else return bs(l , mid - 1 , x) ;
}
int main(){
    long long int n, m, sum = 0, t; cin>>n>>m;
    for(int i = 1 ; i <= n ; i ++){
        cin>>a[i];
        sum += a[i], ans[i] = sum;
    }
    for(int i = 1; i <= m; i++) cin >> b[i];
    for(int i = 1 ;i <= m ; i ++){
        t = bs(1 , n , b[i]) ;
        cout<<t<<" "<<b[i]-ans[t - 1]<<endl;
    }
    return 0;
}
 