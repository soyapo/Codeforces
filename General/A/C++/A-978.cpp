#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int nums[60];
    int n; cin>>n;
    int t = n;
    map <int, int> bl;
    for(int i = 0; i < n; i++) cin>>nums[i];
    for(int i = n - 1; i >=0; i--){
        if(bl[nums[i]] > 0) nums[i] = 0, t--;
        bl[nums[i]] = 1;
    }
    cout<<t<<endl;
    for(int i = 0; i < n; i++){
        if(nums[i]) cout<<nums[i]<<" ";
    }
    return 0;
}