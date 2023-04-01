#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 1e5 + 10;
vector <int> nums[mn], nums2[mn];
int flag[mn], color[mn], temp, valid = 1;
void dfs(int v){
    flag[v] = true;
    for(auto u: nums[v]){
        if(!flag[u]){
            color[u] = color[v] + 1;
            dfs(u);
        }
        else temp = __gcd(temp , abs(color[v] + 1 - color[u]));
    }
    for(auto u: nums2[v]){
        if(!flag[u]){
            color[u] = color[v] - 1;
            dfs(u);
        }
        else temp = __gcd(temp, abs(color[v] - 1 - color[u]));
    }
}
int main(){
    fst
    int n, m, a, b; cin>>n>>m;
    for(int i = 0; i < m; i++){
        cin>>a>>b;
        nums[--a].push_back(--b);
        nums2[b].push_back(a);
    }
    for(int i = 0; i < n; i++)
        if(!flag[i])
            dfs(i);
    cout<<(!temp ? n : temp)<<endl;
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