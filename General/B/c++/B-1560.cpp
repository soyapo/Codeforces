#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    long long int a, b, c, count, t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        count = abs(a - b) * 2;
        if(c > count || count == 2 || a < 1 || a > count || b < 1 || b > count || c < 1 || c > count) cout<<"-1\n";
        else{
            if(c>count/2) cout<<c-(count/2)<<'\n';
            else cout<<c+(count/2)<<'\n';
        }
    }
}