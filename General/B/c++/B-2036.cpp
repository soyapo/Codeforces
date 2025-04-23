#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int MAXN = 2e5 + 10;
int nums[MAXN];
int main(){
    fst
    int t, n, k, b, c; cin>>t;
    while(t--){
        cin>>n>>k;
        int mn = min(n, k), s = 0;
        for(int i = 0; i < k; i++)
            nums[i] = 0;
        for(int i = 0; i < k; i++){
            cin>>b>>c;
            nums[b - 1] += c;
        }
        sort(nums, nums + k);
        for(int i = k - 1; i >= k - mn; i--)
            s += nums[i];
        cout<<s<<'\n';
    }
    return 0;
}