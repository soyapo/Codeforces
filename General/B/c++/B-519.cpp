#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 1e5 + 10;
int a[mn], b[mn], c[mn];
int main(){
    fst
    int n; cin>>n;
    for(int i = 0; i < n; i++)  
        cin>>a[i];
    for(int i = 0; i < n - 1; i++)
        cin>>b[i];
    for(int i = 0; i < n - 2; i++)
        cin>>c[i];
    sort(a, a + n);
    sort(b, b + n - 1);
    sort(c, c + n - 2);
    for(int i = 0; i < n; i++){
        if(b[i] != a[i]){
            cout<<a[i]<<'\n';
            break;
        }
    }
    for(int i = 0; i < n - 1; i++){
        if(c[i] != b[i]){
            cout<<b[i]<<'\n';
            break;
        }
    }
    return 0;
}