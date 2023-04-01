#include <bits/stdc++.h>
using namespace std;
const int mn = 1e5 + 1;
long long int dp[mn + 10];
map <long long int, long long int> nums;
int main(){
    int n, mx = -1, tmp; cin>>n;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        nums[tmp]++;
        mx = max(mx, tmp);
    }
    dp[0] = 0, dp[1] = nums[1];
    for (int i = 2; i <= mn; i++){
        dp[i] = max(dp[i - 2] + (i * nums[i]), dp[i - 1]);
    }
    cout<<dp[mn];
}