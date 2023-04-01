#include <bits/stdc++.h>
using namespace std;
const int mn = 1e5;
int n, a[mn], now = 1, then;
map <int, int> nums;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin>>n;
    for(int i = 0; i < n; i++) {
        then = now;
        cin>>a[i];
        now += a[i];
        for(int j = then; j <= now; j++) nums[j] = i + 1;
    }
    cin>>now;
    for(int i = 0; i < now; i++){
        cin>>then;
        cout<<nums[then]<<endl;
    }
    return 0;
}