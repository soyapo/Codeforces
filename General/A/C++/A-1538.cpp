#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n, index_min, index_max, right, left, tmp; cin>>t;
    while(t--){
        cin>>n;
        for(int i = 1; i <= n; i++){
            cin>>tmp;
            if(tmp==1) index_min = i;
            else if(tmp==n) index_max = i;
        }
        right = max(index_max, index_min), left = min(index_max, index_min);
        int ans = min(right, n - left + 1);
        ans = min(ans, (n - right + 1) + left);
        cout<<endl<<ans<<endl<<endl;
    }
    return 0;
}