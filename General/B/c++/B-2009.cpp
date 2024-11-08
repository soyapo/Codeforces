#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, n, nums[1000]; cin>>t;
    char c;
    while(t--){
        cin>>n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 4; j++){
                cin>>c;
                nums[i] = (c == '#' ? j + 1 : nums[i]);
            }
        }
        for(int i = n - 1; i >= 0; i--)
            cout<<nums[i]<<' ';
        cout<<endl;
    }
    return 0;
}