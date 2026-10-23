#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, n, k, nums[105];
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i = 0; i < n; i++){
            cin>>nums[i];
        }
        int s = 0;
        for(int i = 0; i < k; i++)
            if(nums[i] > k)
                s++;
        cout<<s<<'\n';
    }
    return 0;
}