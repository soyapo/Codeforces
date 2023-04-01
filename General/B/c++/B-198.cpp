#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 1e5 + 10;
vector <pair<pair<int, int>, pair<int, int>> nums[mn][2];
priority_queue <int> q;
int n, k, par[mn];
string s1, s2;
long long dist[mn];
void prt(int x);
int main(){
    fst
    cin>>n>>k>>s1>>s2;
    for(int i = 0; i < n; i++){
        if(s1[i] == '-')
            if(s1[i + 1] == '-')
                nums[i][0].push_back(i + 1)
            else if(s1[i - 1] == '-')
            
            else if(s2[i + k] == '-')
        nums[a].push_back(b);
        nums[b].push_back(a);
        wgh[{a, b}] = (!wgh[{a, b}] ? w : min(w, wgh[{a, b}])), wgh[{b, a}] = (!wgh[{b, a}] ? w : min(w, wgh[{b, a}]));
    }
    for(int i = 2; i <= n; i++)
        dist[i] = 1e18;
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