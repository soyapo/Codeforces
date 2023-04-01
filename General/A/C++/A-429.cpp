#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 1e5 + 5;
int init[mn], goal[mn], flag[mn], n, x, y, ans;
vector <int> adj[mn];
vector <int> ntc;
void dfs(int v, int et, int ot, int dpth){
    flag[v] = 1, dpth++;
    if(dpth % 2 == 0) init[v] == (init[v] + et) % 2;
    else init[v] == (init[v] + ot) % 2;
    if(init[v] != goal[v]){
        ans++, et = dpth % 2 == 0 ? et++ : et, ot = dpth % 2 == 1 ? ot++ : ot;
        ntc.push_back(v + 1);
    }
    for(auto u: adj[v])
        if(!flag[u])
            dfs(u, et, ot, dpth);
}
int main(){
    fst
    cin>>n;
    for(int i = 0; i < n - 1; i++){
        cin>>x>>y;
        adj[x--].push_back(y--);
        adj[y].push_back(x);
    }
    for(int i = 0; i < n; i++) cin>>init[i];
    for(int i = 0; i < n; i++) cin>>goal[i];
    dfs(0, 0, 0, 0);
    cout<<ans<<endl;
    for(auto u: ntc)
        cout<<u<<endl;
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