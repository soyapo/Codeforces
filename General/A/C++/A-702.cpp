#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 1e5 + 10;
long long int nums[mn];
int main(){
    fst
    long long int n, cnt = 1, mx = 1; 
    cin>>n>>nums[0];
    for(int i = 1; i < n; i++){
        cin>>nums[i];
        cnt = (nums[i] > nums[i - 1] ? cnt + 1 : 1), mx = max(mx, cnt);
    }
    cout<<mx;
    return 0;
}