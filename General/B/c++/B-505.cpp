#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 1e3 + 10;
vector <int> nums[mn][mn];
int flag[mn], n, m, q, u, v, a, b, c, ans;
void dfs(int v, int e){
    flag[v] = 1;
    for(int u: nums[e][v])
        if(!flag[u])
            dfs(u, e);
}
int main(){
    fst
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        cin>>a>>b>>c;
        nums[c][a].push_back(b);
        nums[c][b].push_back(a);
    }
    cin>>q;
    for(int i = 0; i < q; i++){
        ans = 0;
        cin>>u>>v;
        for(int j = 0; j <= m; j++){
            dfs(u, j);
            if(flag[v]) ans++;
            for(int k = 0; k < mn; k++) flag[k] = 0;
        }
        cout<<ans<<endl;
    }
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