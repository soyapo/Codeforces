#include <bits/stdc++.h>
using namespace std;
int nums[10][10];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    for(int i = 0; i < 10; i++) nums[0][i] = 1, nums[i][0] = 1;
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++) nums[i][j] = nums[i - 1][j] + nums[i][j - 1];
    }
    int n; cin>>n;
    cout<<nums[n - 1][n - 1]<<endl;
    return 0;
}