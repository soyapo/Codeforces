// Lotfan goosfand naboode va mask bezanid 
// -Hichkas
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, w, s = 0, tmp = 0, mn = 0, mx = 0; cin>>n>>w;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        s += tmp, mn = min(mn, s), mx = max(mx, s);
    }
    cout<<max(0, w + mn - mx + 1)<<"\n";
    return 0;
}