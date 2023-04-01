#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 2e5 + 10;
vector <int> nums[mn];
int flag[mn], p[mn], roots[mn], r_cnt;
void dfs(int v, int e){
    flag[v] = 1;
    for(auto u: nums[v]){
        if(!flag[u])
            dfs(u, v);
        else if(u != e){
            roots[r_cnt] = u;
        }
    }
}
int main(){
    fst
    int n, root = -1, a; cin>>n;
    for(int i = 0; i < n; i++){
        cin>>p[i];
        nums[--p[i]].push_back(i);
        nums[i].push_back(p[i]);
        if(p[i] == i) root = i;
    }
    for(int i = 0; i < n; i++){
        if(!(flag[i])){
            dfs(i, -1);
            r_cnt++;
        }
    }
    int cnt = 0;
    if(root == -1) 
        root = roots[0];
    for(int i = 0; i < r_cnt; i++){
        if(p[roots[i]] == root) cnt--;
        p[roots[i]] = root, cnt++;
    }
    cout<<cnt<<endl;
    for(int i = 0; i < n; i++)
        cout<<p[i] + 1<<' ';
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
