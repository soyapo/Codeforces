#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int nums[6] = {0,0,0,0,0,0};
    int n, cnt = 0; cin>>n;
    while(n--){
        string a;
        cin>>a;
        if(a=="purple")nums[0]++;
        else if(a=="green")nums[1]++;
        else if(a=="blue")nums[2]++;
        else if(a=="orange")nums[3]++;
        else if(a=="red")nums[4]++;
        else if(a=="yellow")nums[5]++;
    }
    for(int i = 0; i < 6; i++){
        if(nums[i]==0) cnt++;
    }
    cout<<cnt<<endl;
    if(nums[0] == 0) cout<<"Power\n";
    if(nums[1] == 0) cout<<"Time\n";
    if(nums[2] == 0) cout<<"Space\n";
    if(nums[3] == 0) cout<<"Soul\n";
    if(nums[4] == 0) cout<<"Reality\n";
    if(nums[5] == 0) cout<<"Mind\n";
    return 0;
}