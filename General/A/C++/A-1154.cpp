#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int nums[4];
    for(int i = 0; i < 4; i++) cin>>nums[i];
    sort(nums, nums + 4);
    cout<<nums[3] - nums[2]<<" "<<nums[3] - nums[1]<<" "<<nums[3] - nums[0]; 
    return 0;
}