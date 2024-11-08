#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int nums
int main(){
    fst
    int t, n, s, m, i0, i1; cin>>t;
    while(t--){
        cin>>n>>s>>m;
        for(int i = 0; i < s; i++){
            cin>>i0>>i1;
            for(int j = i0; j <= i1; j++){
                nums[j] = 1;
            }
        }
        
    }   
    return 0;
}