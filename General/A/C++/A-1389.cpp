#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, l, r; cin>>t;
    while(t--){
        cin>>l>>r;
        if(2 * l <= r)
            cout<<l<<" "<<2 * l<<"\n";
        else
            cout<<"-1 -1\n";
    }
    return 0;
}