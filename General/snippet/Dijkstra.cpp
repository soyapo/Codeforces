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
//     for(int j = 1; j < m; j++)
//         for(int i = 1; i <= m; i++)
//             for(auto u: nums[i])
//                 if(d[u.first] > d[i] + u.second)
//                     d[u.first] = d[i] + u.second, dad[u.first] = i;