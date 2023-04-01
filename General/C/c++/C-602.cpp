#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 420;
vector <pair<int, int>> nums[mn][2];
int d[mn][2], tbl[mn][mn];
int main(){
    fst
    // 1 -> train | 0 -> car
    int n, m, u, v, k = -1;
    cin>>n>>m;
    for(int i = 1; i <= m; i++){
        cin>>u>>v;
        tbl[u][v] = 1, tbl[v][u] = 1;
    }
    k = (tbl[1][n] ? 0 : 1);
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) 
            if(tbl[i][j] == k)
                nums[i][k].push_back({j, 1});
    for(int i = 0; i <= n; i++)
        d[i][k] = 1e4;
    d[1][k] = 0;
    for(int t = 0; t < n - 1 ; t++)
        for(int i = 1; i <= n; i++)
            for(auto u: nums[i][k])
                d[u.first][k] = min(d[u.first][k], d[i][k] + u.second);
    cout<<(d[n][k] == 10000 ? -1 : max(1, d[n][k]));
    int s; 
    return 0;
}
