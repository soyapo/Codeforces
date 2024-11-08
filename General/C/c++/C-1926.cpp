#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 2e5 + 10;
int nums[mn] = {0, 1};
int calc(int n){
    int s = 0;
    while(n >= 1)
        s += n % 10, n /= 10;
    return s;
}
int main(){
    fst
    for(int i = 2; i < 2e5 + 5; i++)
        nums[i] = nums[i - 1] + calc(i);
    int t; cin>>t;
    while(t--){
        int p; cin>>p;
        cout<<nums[p]<<'\n';
    }
    return 0;
}