#include <bits/stdc++.h>
using namespace std;
const long long int mn = 2e5 + 10;
long long int nums[mn][20];
int main(){
    long long int t, l, r, minn;
    for(int i = 1; i < mn; i++){
        for(int j = 0; j < 20; j++) nums[i][j] = nums[i - 1][j] + ((i & (1<<j)) == 0);
    }
    cin>>t;
    for(int j = 0; j < t; j++){
        cin>>l>>r;
        for(int i = 0; i < 20; i++){
            if(i == 0) minn = nums[r][i] - nums[l-1][i];
            minn = min(minn, nums[r][i] - nums[l-1][i]);
        }
        cout<<minn<<endl;
    }
    return 0; 
}