#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int n, h, a, w = 0; cin>>n>>h;
    for(int i = 0; i < n; i++){
        cin>>a;
        w = a > h ? w + 2 : w + 1;
    }
    cout<<w;
    return 0;
}