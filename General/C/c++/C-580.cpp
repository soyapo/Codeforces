#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 1e5 + 10;
int bad[mn], flag[mn], ans, m;
vector <int> nums[mn];
void dfs(int v, int cat){
    int count2 = 0;
    flag[v] = 1;
    if(bad[v] == 1) cat++;
    else cat = 0;
    if(cat > m) return;
    for(auto u : nums[v]){
        if(!flag[u]){
            count2++;
            dfs(u, cat);
        }
    }
    if(count2 == 0) ans++;
}
int main(){
    fst
    int n, tmp, x, y; cin>>n>>m;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        bad[i] = tmp;
    }
    for(int i = 0; i < n-1; i++){
        cin>>x>>y;
        nums[--x].push_back(--y);
        nums[y].push_back(x);
    }
    dfs(0, 0);
    cout<<endl<<ans;
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