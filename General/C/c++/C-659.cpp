#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n, m, e = 1e9, count = 0; cin>>n>>m;
    map <int, int> nums;
    vector<int>to_buy;
    for(int i = 0; i < n; i++) {
        int temp; cin>>temp;
        nums[temp] = 1;
    }
    for(int i = 1; i<=e; i++){
        if(nums[i] == 1) continue;
        if(m - i < 0) break;
        to_buy.push_back(i), count += 1, m-=i;
    }
    cout<<count<<endl;
    for(int i: to_buy) cout<<i<<" ";
}