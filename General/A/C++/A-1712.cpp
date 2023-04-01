#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, n, k, nums[105], nums2[105]; 
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i = 0; i < n; i++){
            cin>>nums[i];
            nums2[i] = nums[i];
        }
        sort(nums2, nums2 + k);
        int in = 0, s = 0;
        for(int i = 0; i < k; i++)
            for(int j = 0; j < k; j++)
                if(nums2[i] == nums[j])
                   in = 1;
            if(in) 
                s++, in--;
        cout<<k<<" "<<s<<'\n';
    }
    return 0;
}