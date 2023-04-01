#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n, nums[51], f = 0; cin>>t;
    while(t--){
        f = 0;
        cin>>n;
        for(int i = 0; i < n; i++) cin>>nums[i];
        sort(nums, nums+n);
        for(int i = 1; i < n; i++){
            if(nums[i] - nums[i-1] > 1) f = 1;
        }
        if(f) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}