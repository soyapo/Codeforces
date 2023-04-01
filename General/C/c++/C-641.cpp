#include <bits/stdc++.h>
using namespace std;
const int mn = 1e6 + 1;
int nums[mn];
int main(){
    ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
    int n, q, one = 0, two = 1, identity, query;
    cin>>n>>q;
    for(int i = 0; i < q; i++){
        cin>>identity;
        if(identity == 2) one ^= 1, two ^= 1;
        else{
            cin>>query;
            one = (one + query + n) % n, two = (two + query + n) % n;
        }
    }
    for(int i = 1; i < n; i+=2) nums[one] = i, one = (one + 2) % n;
    for(int i = 2; i <= n; i+=2) nums[two] = i, two = (two + 2) % n;
    for(int i = 0; i < n; i++) cout<<nums[i]<<" ";
}