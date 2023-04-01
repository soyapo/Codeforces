#include <bits/stdc++.h>
using namespace std;
const int mn = 1e5 + 10, MOD = 1e9 + 7;
long long int dp[mn];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, k, a, b;
    cin>>t>>k;
    dp[0] = 1;
    for(int i = 1; i <= mn; i++){
        if(i < k) dp[i] = dp[i-1];
        if(i >= k) dp[i] = (dp[i - 1] + dp[i-k]) % MOD;
    }
    for(int i = 1; i <= mn; i++)
        dp[i] = (dp[i] + dp[i-1]) % MOD;
    for(int i = 0; i < t; i++){
        cin>>a>>b;
        cout<<(dp[b] - dp[a-1] + MOD) % MOD<<endl;
    }
    return 0;
}