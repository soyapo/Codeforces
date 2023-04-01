#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 3e2 + 10;
vector <int> nums[mn];
pair <vector<int>, vector<int> > final[mn];
map <int, int> p;
int flag[mn], n, a, c, lst[mn];
void dfs(int v){
    flag[v] = 1;
    final[c].first.push_back(v);
    final[c].second.push_back(p[v]);
    for(auto u: nums[v])
        if(!flag[u])
            dfs(u);
}
int main(){
    fst
    cin>>n;
    string s;
    for(int i = 0; i < n; i++){
        cin>>a;
        p[i] = a - 1;
    }
    for(int i = 0; i < n; i++){
        cin>>s;
        for(int j = 0; j < n; j++)
            if(s[j] == '1')
                nums[i].push_back(j);
    }
    for(int i = 0; i < n; i++){
        if(!flag[i]){
            dfs(i);
            c++;
        }
    }
    for(int i = 0; i < c; i++){
        sort(final[i].first.begin(), final[i].first.end());
        sort(final[i].second.begin(), final[i].second.end());
        for(int j = 0; j < final[i].first.size(); j++)
            lst[final[i].first[j]] = final[i].second[j];
    }
    for(int i = 0; i < n; i++)
        cout<<lst[i] + 1<<' ';
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
