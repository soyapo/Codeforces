#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, n, a, b; cin>>t;
    while(t--){
        cin>>n>>a;
        int c = 1;
        for(int i = 0; i < n - 1; i++){
            cin>>b;
            if(b - a != 5 & b - a != -5 & b - a != 7 & b - a != -7)
                c = 0;
            a = b;
        }
        cout<<(c ? "YES\n" : "NO\n");
    }
    return 0;
}