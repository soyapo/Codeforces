#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int n; cin>>n;
    for(int i = 1; i <= n; i++){
        if(i%2 == 1) cout<<"I hate ";
        else cout<<"I love ";
        if(i != n) cout<<"that ";
    }
    cout<<"it";
    return 0;
}