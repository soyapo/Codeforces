#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 1e5 + 10;
vector <int> nums[mn];
map <pair<int, int>, int> wgh;
priority_queue <int> q;
int n, m, a, b, w, t, par[mn];
long long dist[mn];
void prt(int x);
int main(){
    fst
    cin>>n>>m;
    for(int i = 2; i <= n; i++)
        dist[i] = 1e18;
    for(int i = 1; i <= m; i++){
        cin>>a>>b>>w;
        nums[a].push_back(b);
        nums[b].push_back(a);
        wgh[{a, b}] = (!wgh[{a, b}] ? w : min(w, wgh[{a, b}])), wgh[{b, a}] = (!wgh[{b, a}] ? w : min(w, wgh[{b, a}]));
    }
    q.push(1);
    while(q.size()){
        t = q.top();
        q.pop();
        for(int i = 0; i < nums[t].size(); i++)
            if(dist[t] + wgh[{t, nums[t][i]}] < dist[nums[t][i]]) 
                dist[nums[t][i]] = dist[t] + wgh[{t, nums[t][i]}], par[nums[t][i]] = t, q.push(nums[t][i]);
    }
    if(dist[n] == 1e18)
        return cout<<-1, 0;
    prt(n);
}
void prt(int x){
    if(x > 1) 
        prt(par[x]);
    cout<<x<<' ';
}