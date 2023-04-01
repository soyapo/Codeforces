#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int s, r, t; cin>>s>>r;
    int cnt = 0;
    for(int x = 1; x < 10; x++){
        if((s * x) % 10 == 0 || (s * x) % 10 == r){
            t = x;
            break;
        } 
    }
    cout<<t;
    return 0;
}