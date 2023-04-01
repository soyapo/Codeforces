#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    pair <int, int> y[1001];
    int s, n; cin>>s>>n;
    for(int i = 0; i < n; i++) cin>>y[i].first>>y[i].second;
    sort(y, y + n);
    for(int i = 0; i < n; i++){
        if(s<=y[i].first){
            cout<<"NO";
            return 0;
        }
        else s+=y[i].second;
    }
    cout<<"YES";
    return 0;
}