#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m = 0, a = 0; cin>>n;
    int nums[n];
    for(int i = 0; i < n; i++){
        cin>>nums[i];
        m = max(m, nums[i]);
    }   
    for(int i = 0; i < n; i++) a += m - nums[i];
    cout<<a;
    return 0;
}