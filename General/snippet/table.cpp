#include <bits/stdc++.h>
using namespace std;

const int mn = 1e3 + 2;

int nums[mn][mn], result[mn][mn];

int main(){
    int n, m; 
    cin>>n>>m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin>>nums[i][j];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            result[i][j] = nums[i][j] + result[i-1][j] + result[i][j-1] - result[i-1][j-1];
    int q, x1, y1, x2, y2;
    cin>>q;
    for(int i = 0; i < q; i++){
        cin>>x1>>y1>>x2>>y2;
        cout<<result[x2][y2] - result[x2][y1-1] - result[x1-1][y2] - result[x1-1][y1-1]<<endl; 
    }
    return 0;
}