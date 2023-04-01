#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, nums[30] = {0}; cin>>t;
    for(int i = 1; i < 30; i++)
        nums[i] = (nums[i - 1] + 1) * 2 - 1;
    while(t--){
        cin>>n;
        for(int i = 2; i < 30; i++){
            if(n % nums[i] == 0){
                cout<<n / nums[i]<<'\n';
                break;
            }
        }
    }
    return 0;
}