#include <bits/stdc++.h>
using namespace std;
const int mn = 1e5;
int nums[mn];
int main(){
    int n, counter = 1, mx = 1, num; cin>>n;
    for(int i = 0; i < n; i++) cin>>nums[i];
    for(int i = 1; i < n; i++){
        if(nums[i] >= nums[i-1]) counter++;
        else mx = counter > mx ? counter : mx, counter = 1;
    }
    cout<<max(counter, mx);
    return 0;
}