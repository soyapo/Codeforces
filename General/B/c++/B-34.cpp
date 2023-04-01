#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int n, m, s = 0, nums[105]; 
    cin>>n>>m;
    for(int i = 0; i < n; i++)
        cin>>nums[i];
    sort(nums, nums + n);
    for(int i = 0; i < m; i++)
        s += (nums[i] > 0 ? 0 : nums[i]);
    cout<<abs(s);
    return 0;
}