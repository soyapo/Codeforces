#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int a, b, c, count, t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        count = abs(a - b) * 2;
        if(c > count || count == 2 || a < 1 || a > count || b < 1 || b > count || c < 1 || c > count) cout<<"-1\n";
        else{
            if(c>count/2) cout<<c-(count/2)<<endl;
            else cout<<c+(count/2)<<endl;
        }
    }
}