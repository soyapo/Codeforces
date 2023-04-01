#include <bits/stdc++.h>
using namespace std;
vector <int> planes;
set <int> ma_planes;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, mi = 0, ma = 0, n2;
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        cin>>n2;
        planes.push_back(n2);
        ma_planes.insert(n2);
    }
    n2 = n;
    sort(planes.begin(), planes.end());
    for(int i = 0; i < m; i++){
        while(n > 0 && planes[i] > 0){
            mi += planes[i];
            n--, planes[i]--;
        }
    }
    while(n2 > 0){
        cout<<ma<<endl;
        ma += *ma_planes.rbegin();
        n2--, (*ma_planes.rbegin())-=1;  
    }
    cout<<ma<<" "<<mi;
    return 0;
}