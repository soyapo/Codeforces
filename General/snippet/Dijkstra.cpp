// vector <pair<int, int>> nums[mn];
// int dad[mn] = {-1, -1}, d[mn] = {0, 0}, n, m, a, b, w;
// int main(){
//     fst
//     cin>>n>>m;
//     for(int i = 2; i <= n; i++)
//         d[i] = 1e9 + 10, dad[i] = -1;
//     for(int i = 1; i <= m; i++){
//         cin>>a>>b>>w;
//         nums[a].push_back({b, w});
//         nums[b].push_back({a, w});
//     }
//     priority_queue <pair<int, int>, vector <pair<int, int>>, greater <pair<int, int>>> pq;
//     pq.push({0, 1});
//     while(!pq.empty()){
//         int v = pq.top().second, dv = pq.top().first; pq.pop();
//         if(dv > d[v]) continue;
//         for(auto u: nums[v])
//             if(d[u.first] > d[v] + u.second)
//                 d[u.first] = d[v] + u.second, dad[u.first] = v, pq.push({d[u.first], u.first});
//     }