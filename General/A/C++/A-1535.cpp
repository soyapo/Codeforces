#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int nums[4], t; cin >> t;
    while (t--){
        for (int i = 0; i < 4; i++) cin >> nums[i];
        if(max(nums[0], nums[1]) > min(nums[2], nums[3]) && min(nums[0], nums[1]) < max(nums[2], nums[3])) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}