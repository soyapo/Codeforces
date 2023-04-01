#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, n, a; cin>>t;
    while(t--){
        cin>>n;
        int s = 0;
        for(int i = 0; i < n; i++){
            cin>>a;
            s += a;   
        }
        if(s == n) 
            cout<<0<<'\n';
        else if(s < n) 
            cout<<1<<'\n';
        else 
            cout<<s - n<<'\n';
    }
    return 0;
}