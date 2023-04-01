#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int nums[4][3], full = 0, segment = 0, temp;
    cin>>temp;
    nums[0][0] = temp, nums[1][0] = temp, nums[2][0] = temp;
    cin>>temp;
    nums[0][1] = temp, nums[1][1] = temp, nums[3][0] = temp;
	cin>>temp;
    nums[0][2] = temp, nums[2][1] = temp, nums[3][1] = temp;
    cin>>temp;
    nums[1][2] = temp, nums[2][2] = temp, nums[3][2] = temp;
    for(int i = 0; i < 4; i++){
        if(nums[i][0] + nums[i][1] == nums[i][2] || nums[i][0] + nums[i][2] == nums[i][1] || nums[i][2] + nums[i][1] == nums[i][0]) segment = 1;
        if(nums[i][0] + nums[i][1] > nums[i][2] && nums[i][0] + nums[i][2] > nums[i][1] && nums[i][2] + nums[i][1] > nums[i][0]) full = 1;
    }
    if(full)cout<<"TRIANGLE";
    else if(segment)cout<<"SEGMENT";
    else cout<<"IMPOSSIBLE";
    return 0;
}