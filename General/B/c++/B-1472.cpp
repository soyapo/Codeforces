#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, n, a; cin>>t;
    while(t--){
        cin>>n;
        int nums[3] = {0, 0, 0};
        for(int i = 0; i < n; i++){
            cin>>a;
            nums[0] += a, nums[a]++;
        }
        if(nums[0] % 2 == 1 || (nums[1] == n && n % 2 == 1) || (nums[2] == n && n % 2 == 1))
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}