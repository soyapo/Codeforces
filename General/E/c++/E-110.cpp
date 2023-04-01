#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 1e5 + 10;
vector < pair <long long int, long long int> > nums[mn];
long long int dp[mn], dp2[mn], flag[mn], sz[mn];
long long ans = 0, n;
void dfs(int v){
    flag[v] = true, sz[v] = 1;
    for(auto u: nums[v]){
        if(!flag[u.first]){
            dfs(u.first);
            sz[v] += sz[u.first], dp[v] += u.second ? sz[u.first] : dp[u.first];
        }
    }
}
void dfs2(int v){
    flag[v] = true, ans += dp[v] * (dp[v] - 1) + dp2[v] * (dp2[v] - 1) + 2 * dp[v] * dp2[v];
    for(auto u: nums[v]){
        if(!flag[u.first]){
            dp2[u.first] += (u.second ?  sz[1] - sz[u.first] : dp2[v] + dp[v] - dp[u.first]);
            dfs2(u.first);
        }
    }
}
int check(int n){
    while(n > 0){
        if(n % 10 != 4 && n % 10 != 7) return 0;
        n /= 10;
    }
    return 1;
}
int main(){
    fst
    long long int a, b, w; 
    cin>>n;
    for(int i = 1; i < n; i++){
        cin>>a>>b>>w;
        nums[a].push_back({b, check(w)});
        nums[b].push_back({a, check(w)});
    }
    dfs(1);
    for(int i = 0; i <= n + 1; i++) flag[i] = 0;
    dp2[0] = dp[0];
    dfs2(1);
    cout<<ans;
    return 0;
}
/*
      ___                       ___           ___           ___           ___           ___     
     /\__\          ___        /\  \         /\__\         /\__\         /\  \         /\  \    
    / /  /         /\  \      /  \  \       / /  /        / /  /        /  \  \       /  \  \   
   / /__/          \ \  \    / /\ \  \     / /__/        / /__/        / /\ \  \     / /\ \  \  
  /  \  \ ___      /  \__\  / /  \ \  \   /  \  \ ___   /  \__\____   /  \ \ \  \   _\ \ \ \  \ 
 / /\ \  /\__\  __/ /\/__/ / /__/ \ \__\ / /\ \  /\__\ / /\  ___\__\ / /\ \ \ \__\ /\ \ \ \ \__\
 \/__\ \/ /  / /\/ /  /    \ \  \  \/__/ \/__\ \/ /  / \/_| |  |     \/__\ \/ /  / \ \ \ \ \/__/
      \  /  /  \  /__/      \ \  \            \  /  /     | |  |          \  /  /   \ \ \ \__\  
      / /  /    \ \__\       \ \  \           / /  /      | |  |          / /  /     \ \/ /  /  
     / /  /      \/__/        \ \__\         / /  /       | |  |         / /  /       \  /  /   
     \/__/                     \/__/         \/__/         \|__|         \/__/         \/__/    
*/