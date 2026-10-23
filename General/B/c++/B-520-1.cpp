#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 2e4 + 20;
vector <pair<int, int>> nums[mn];
int d[mn];
int main(){
    fst
    int n, m;
    cin>>n>>m;
    if(n >= m)
        return cout<<n - m, 0;
    for(int i = 0; i <= 2 * m; i++)
        d[i] = 1e4 + 10;
    d[n] = 0;
    for(int i = 1; i <= 2 * m; i++){
        if(i * 2 <= 2 * m) nums[i].push_back({i * 2, 1});
        nums[i].push_back({i - 1, 1});
    }
    queue <int> bfs;
    bfs.push(n);
    while(bfs.size()){
        int v = bfs.front();
        bfs.pop();
        for(auto u: nums[v])
            if(d[v] + u.second < d[u.first])
                d[u.first] = d[v] + u.second, bfs.push(u.first);
    }
    cout<<d[m];
    return 0;
}
// 666 6666
