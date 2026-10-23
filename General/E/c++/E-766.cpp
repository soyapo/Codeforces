#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 1e5 + 10;
vector <int> nums[mn];
int a[mn], p[mn], c[mn][20][2];
long long int cnt[20];
void calc(int v){
    for(int b = 0; b < 20; b++){
        int x = (a[v] >> b) & 1;
        c[v][b][x] = 1, cnt[b] += x;
    }
    for(auto u: nums[v]){
        if(u == p[v]) continue;
        for(int b = 0; b < 20; b++){
            int x = (a[v] >> b) & 1;
            cnt[b] += 1ll * c[v][b][0] * c[u][b][1] + 1ll * c[v][b][1] * c[u][b][0];
            c[v][b][x] += c[u][b][0], c[v][b][x ^ 1] += c[u][b][1];
        }
    }
}
int main(){
    fst
    int n, x, y; cin>>n;
    for(int i = 1; i <= n; i++) cin>>a[i];
    for(int i = 1; i < n; i++){
        cin>>x>>y;
        nums[x].push_back(y);
        nums[y].push_back(x);
    }
    vector <int> order(1, 1);
    for(int i = 0; i < (int)order.size(); i++)
        for(auto u: nums[order[i]])
            if(u != p[order[i]])
                p[u] = order[i], order.push_back(u);
    for(int i = n - 1; i >= 0; i--)
        calc(order[i]);
    long long int ans = 0;
    for(int b = 0; b < 20; b++) ans += cnt[b] << b;
    cout<<ans<<'\n';
    return 0;
}
