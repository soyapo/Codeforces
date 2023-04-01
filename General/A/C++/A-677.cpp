#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, h, a, w = 0; cin>>n>>h;
    for(int i = 0; i < n; i++){
        cin>>a;
        w = a > h ? w + 2 : w + 1;
    }
    cout<<w;
    return 0;
}k