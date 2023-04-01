#include <bits/stdc++.h>
using namespace std;
const int mn = 2e5 + 5;
int nums[mn];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, k, a, cnt = 0; cin>>n>>k;
    for(int i = 0; i < n; i++) cin>>nums[i];
    sort(nums, nums + n);
    a = !k ? nums[0]-1 : nums[k-1];
    for(int i = 0; i < n; i++){
        if(nums[i]<=a) cnt++;
    }
    if(a<1||cnt!=k) cout<<"-1";
    else cout<<a;
    return 0;
}