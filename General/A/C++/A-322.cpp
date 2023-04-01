#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin>>n>>m;
    cout<<n+m-1<<endl;
    for(int i = 1; i <= m; i++) cout<<"1 "<<i<<endl;
    for(int i = 2; i <= n; i++) cout<<i<<" 1"<<endl;
    return 0;
}