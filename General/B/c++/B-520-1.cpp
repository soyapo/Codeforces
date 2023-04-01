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
    for(int i = 1; i <= m; i++){
        nums[i].push_back({i * 2, 1});
        nums[i].push_back({i - 1, 1});
    }
    for(int j = 1; j < 2 * m; j++)
        for(int i = 1; i <= 2 * m; i++)
            for(auto u: nums[i])
                d[u.first] = min(d[u.first], d[i] + u.second);
    cout<<d[m];
    return 0;
}
// 666 6666
