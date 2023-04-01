#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t, x, y, u = 0, r = 0, d = 0, l = 0, valid = 0; cin>>t;
    string s;
    while(t--){
        cin>>x>>y>>s;
        u = 0, r = 0, d = 0, l = 0, valid = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='U') u++;
            else if(s[i]=='R') r++;
            else if(s[i]=='D') d++;
            else if(s[i]=='L') l++;
        }
        if(x == 0){
            if(y == 0) valid = 1;
            else if(y > 0 && u>=abs(y)) valid = 1;
            else if(y < 0 && d>=abs(y)) valid = 1;
        }
        else if(x > 0 && r >= abs(x)){
            if(y == 0) valid = 1;
            else if(y > 0 && u>=abs(y)) valid = 1;
            else if(y < 0 && d>=abs(y)) valid = 1;
        }
        else if(x < 0 && l >= abs(x)){
            if(y == 0) valid = 1;
            else if(y > 0 && u>=abs(y)) valid = 1;
            else if(y < 0 && d>=abs(y)) valid = 1;
        }
        if(valid) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}