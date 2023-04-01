#include <bits/stdc++.h>
using namespace std;
const int mn = 101;
int nums[mn];
int main(){
    int n, k, minn = 101, maxx = 0;
    cin>>n>>k;
    for(int i = 0; i < n; i++){
        cin>>nums[i];
        minn = min(minn, nums[i]), maxx = max(maxx, nums[i]);
    }
    if(maxx-minn>k) cout<<"NO\n";
    else{
        cout<<"YES\n";
        for (int i = 0; i < n; i++){
            int j = 0;
            for (; j < minn; j++){
                cout<<"1 ";
            }
            for(; j < nums[i]; j++){
                cout<<j-minn+1<<" ";
            }
            cout<<endl;
        }
 
    }
    return 0;
}