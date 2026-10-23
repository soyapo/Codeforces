#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 1e5 + 10;
int n, k, dist[mn][2];
string s[2];
int main(){
    fst
    cin>>n>>k>>s[0]>>s[1];
    for(int i = 0; i < n; i++)
        dist[i][0] = dist[i][1] = -1;
    queue <pair<int, int>> q;
    dist[0][0] = 0;
    q.push({0, 0});
    while(q.size()){
        int h = q.front().first, w = q.front().second;
        q.pop();
        int nh[3] = {h + 1, h - 1, h + k}, nw[3] = {w, w, 1 - w};
        for(int i = 0; i < 3; i++){
            if(nh[i] >= n)
                return cout<<"YES", 0;
            if(nh[i] < 0 || s[nw[i]][nh[i]] == 'X' || dist[nh[i]][nw[i]] != -1 || nh[i] <= dist[h][w])
                continue;
            dist[nh[i]][nw[i]] = dist[h][w] + 1;
            q.push({nh[i], nw[i]});
        }
    }
    cout<<"NO";
    return 0;
}