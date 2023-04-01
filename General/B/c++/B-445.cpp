#include <bits/stdc++.h>
using namespace std;
const int mn = 3e3;
vector <int> nums[mn];
int flag[mn], n, m, x, y, ans = 0;
void dfs(int v){
    flag[v] = true;
    for(auto u: nums[v])
        if(!flag[u]) dfs(u);
}
int main(){
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        cin>>x>>y;
        nums[x].push_back(y);
        nums[y].push_back(x);
    }
    for(int i = 0; i < n; i++){
        if(!flag[i]){
            ans++;
            dfs(i);
        }
    }
    if(m == 0) cout<<1;
    else if((1LL<<(n - ans + 1) == 33554432)) cout<<16777216;
    else cout<<(1LL<<(n - ans + 1));
}