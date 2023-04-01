#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, rmv = 0, cnt = 0; cin>>n;
    string s; cin>>s;
    for(int i = 0; i < n; i++){
        if(s[i] == 'x') cnt++;
        else{
            if(cnt>2)rmv+=cnt-2;
            cnt = 0;
        }
    }
    if(cnt>2)rmv+=cnt-2;
    cnt = 0;
    cout<<rmv;
    return 0;
}