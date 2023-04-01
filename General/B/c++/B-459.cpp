#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+2;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long long int n, nums[N], mn = 1e9 + 2, mx = -1, mnc=0, mxc=0; cin>>n;
    for(int i = 0; i < n; i++){
        cin>>nums[i];
        mn = min(mn, nums[i]), mx = max(mx, nums[i]);
    }
    cout<<mx-mn<<" ";
    for(int i = 0; i < n; i++){
        if(nums[i] == mn) mnc++;
        else if(nums[i] == mx) mxc++;
    }
    if(mn == mx) cout<<n*(n-1)/2;
    else cout<<mnc*mxc;
    return 0;
}