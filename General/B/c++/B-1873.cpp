#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, n, m, z, a[10], k; cin>>t;
    while(t--){
        z = 0, m = 1, k = 1;
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            if(!a[i]) z++;
            else k *= a[i];
        }
        if(z > 1){
            cout<<0<<'\n';
            continue;
        }
        else if(z == 1){
            cout<<k<<'\n';
            continue;
        }
        else{            
            sort(a, a + n);
            for(int i = 0; i < n - 1; i++)
                if(a[i])
                    m *= a[i];
            m *= (a[n - 1] + 1);
            cout<<m<<'\n';
        }
        cout<<z<<"\n\n";
    }
    return 0;
}