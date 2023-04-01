#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n, m; cin>>t;
    while(t--){
        cin>>n>>m;
        cout<<(n%2==0?(n/2)*m:(m%2==0?(m/2)*n:(((m-1)/2)*n)+((n-1)/2)+1))<<endl;
    }
    return 0;
}