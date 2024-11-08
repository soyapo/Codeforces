#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, n; cin>>t;
    while(t--){
        cin>>n;
        cout<<(n % 10) + (n / 10)<<endl;
    }
    return 0;
}