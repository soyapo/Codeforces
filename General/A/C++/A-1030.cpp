#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int n, tmp, hard = 0; cin>>n;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        hard = (tmp | hard);
    }
    if(hard) cout<<"HaRD";
    else cout<<"EASy";
    return 0;
}