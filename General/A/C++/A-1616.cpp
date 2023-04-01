#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n, tmp, sum, nums[101]; cin>>t;
    while(t--){
        sum = 0;
        for(int i = 0; i < 101; i++) nums[i] = 0;
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>tmp;
            nums[abs(tmp)]+=1;
        }
        for(int i = 0; i < 101; i++) sum = i == 0 ? sum + min(1, nums[0]) : sum + min(2, nums[i]);
        cout<<sum<<endl;
    }
    return 0;
}