#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, n, p1, p2; cin>>t;
    string s;
    while(t--){
        cin>>n>>s;
        p1 = 0, p2 = n - 1;
        while(p2 - p1 >= 1){
            if(s[p2] != s[p1])
                n -= 2;
            else
                break;
            p2--, p1++;
        }
        cout<<n<<'\n';
    }
    return 0;
}