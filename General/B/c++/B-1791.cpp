#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, n; cin>>t;
    string s;
    while(t--){
        cin>>n>>s;
        int x = 0, y = 0, valid = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'U') y++;
            else if(s[i] == 'D') y--;
            else if(s[i] == 'R') x++;
            else if(s[i] == 'L') x--;
            if(x == y && x == 1)    
                valid = 1;
        }
        cout<<(valid ? "YES\n" : "NO\n");
    }
    return 0;
}