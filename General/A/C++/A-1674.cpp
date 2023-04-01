#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int pw(int base, int power){
    for(int i = 2; i < power; i++) base*=base;
    return base;
}
int main(){
    fst
    int t, x, y, a1, b1; cin>>t;
    while(t--){
        cin>>x>>y;
        int v = 0;
        if((y / x) * x != y || y < x) cout<<"0 0"<<endl;
        else{
            for(int b = 1; b <= 100; b++){
                for(int a = 1; a <= 6; a++){
                    if(pow(b, a) == y / x){
                        v = 1, a1 = a, b1 = b;
                        break;      
                    }
                    if(pow(b, a) > 100) break;
                }
                if(v) break;
            }
        }
        cout<<a1<<" "<<b1<<endl;
    }
    return 0;
}