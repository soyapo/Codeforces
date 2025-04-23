#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int nums[25];
int main(){
    fst
    int t, n; cin>>t;
    while(t--){
        cin>>n;
        
        for(int i = 0; i < n; i++)
            cin>>nums[i];
        
        sort(nums, nums + n);

        int a = 1, s = 0;

        for(int i = 1; i < n; i++){
            if(nums[i] != nums[i - 1])
                s += a / 2, a = 1;
            else
                a++;
        }

        cout<<s + (a / 2)<<'\n';
    }
    return 0;
}