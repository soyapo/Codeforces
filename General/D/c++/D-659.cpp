#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count = 0, nums[3][2];
    cin>>n>>nums[0][0]>>nums[0][1]>>nums[1][0]>>nums[1][1]; 
    for(int i = 2; i <= n; i++){
        cin>>nums[2][0]>>nums[2][1];
        if(nums[0][0] < nums[1][0] && nums[1][1] < nums[2][1]) count++;
        else if(nums[0][0] > nums[1][0] && nums[1][1] > nums[2][1]) count++;
        else if(nums[0][1] < nums[1][1] && nums[1][0] > nums[2][0]) count++;
        else if(nums[0][1] > nums[1][1] && nums[1][0] < nums[2][0]) count++;
        nums[0][0] = nums[1][0], nums[0][1] = nums[1][1], nums[1][0] = nums[2][0], nums[1][1] = nums[2][1];
    }
    cout<<count;
    // for(int i = 0; i < 3; i++){
    //     for(int h = 0; h < 2; h++){
    //         cout<<nums[i][h]<<" ";
    //     }
    //     cout<<endl;
    // }   
    return 0;
}