#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, k, time_for_contest, cn = 0; cin>>n>>k;
    time_for_contest = 240 - k;
    for(int i = 1; i <= n; i++){
        if(time_for_contest < 1) break;
        if(time_for_contest - (5 * i) >= 0){
            time_for_contest -= 5 * i, cn++;
        }
    }
    cout<<cn;
    return 0;
}