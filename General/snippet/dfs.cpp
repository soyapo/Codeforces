#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 2e5 + 2;
bool flag[mn];
int b, e, n, m, ans = 1e9 + 22;
vector <int> v[mn];
void dfs(int x, int k = 0){
    if(x==e){
        ans = min(ans, k);
        return;
    }
    flag[x] = true;
    for(int i = 0; i < v[x].size(); i++){
        int y =v[x][i];
        if(!flag[y]) dfs(y, k + 1);
    }
    flag[x] = false;
}
int main(){
    ios
    cin>>n>>m;
    for(int x, y, i = 0; i < m; i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    cin>>b>>e;
    dfs(b);
    cout<<ans;
    return 0;
}