#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, h, m; cin>>n;
    while(n--){
        cin>>h>>m;
        cout<<((24-h) * 60) - m<<endl;
    }
    return 0;
}