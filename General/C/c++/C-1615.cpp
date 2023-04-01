#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, c1a, c1b, cc = 0, ans = 1e9;
    cin>>t;
    string a, b;
    for(int i = 0; i < t; i++){
        cin>>n>>a>>b;
        c1a = 0, c1b = 0, cc = 0, ans = 1e9;
        for(int j = 0; j < n; j++){
            if(a[j] == '1') c1a++;
            if(b[j] == '1') c1b++;
            if(a[j] != b[j]) cc++;
        }
        if(c1a == c1b) ans = min(ans, cc);
        if(c1a - 1 == n - c1b) ans = min(ans, n - cc);
        if(ans != 1e9) cout<<ans<<endl;
        else cout<<"-1\n";
    }
    return 0; 
}