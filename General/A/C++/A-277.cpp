#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 210;
vector <int> nums[mn];
int flag[mn], n, m, c, a, valid = 0;
void dfs(int v){
    flag[v] = true;
    for(auto u: nums[v])
        if(!flag[u]) dfs(u);
}
int main(){
    fst
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        cin>>c;
        for(int j = 0; j < c; j++){
            cin>>a;
            if(a) valid = 1;
            nums[i].push_back(n + a - 1);
            nums[n + a - 1].push_back(i);
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(flag[i] == 0){
            cnt++;
            dfs(i);
        }
    }
    cout<<(valid ? cnt - 1 : cnt);
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