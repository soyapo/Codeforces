#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, minn = 10001, maxx = 0, count = 0, num; cin>>n;
    for(int i = 0; i < n; i++){
        cin>>num;
        if(num < minn || num > maxx) count++;
        minn = min(minn, num), maxx = max(maxx, num);
    }
    cout<<count - 1;
    return 0;
}