#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, tmp, flag; cin>>n;
    map <int, int> nums;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        nums[tmp]++;
    }
    // cout<<"4-> "<<nums[4]<<"\n3-> "<<nums[3]<<"\n2-> "<<nums[2]<<"\n1-> "<<nums[1]<<endl<<endl;
    while(nums[3] > 0 && nums[1] > 0) nums[1]--, nums[3]--, nums[4]++;
    // cout<<"4-> "<<nums[4]<<"\n3-> "<<nums[3]<<"\n2-> "<<nums[2]<<"\n1-> "<<nums[1]<<endl<<endl;
    while(nums[2] > 1) nums[2]-=2, nums[4]++;
    // cout<<"4-> "<<nums[4]<<"\n3-> "<<nums[3]<<"\n2-> "<<nums[2]<<"\n1-> "<<nums[1]<<endl<<endl;
    while(nums[2] > 0 && nums[1] > 1) nums[1]-=2, nums[2]--, nums[4]++;
    // cout<<"4-> "<<nums[4]<<"\n3-> "<<nums[3]<<"\n2-> "<<nums[2]<<"\n1-> "<<nums[1]<<endl<<endl;
    while(nums[1] > 3) nums[1]-=4, nums[4]++;
    // cout<<"4-> "<<nums[4]<<"\n3-> "<<nums[3]<<"\n2-> "<<nums[2]<<"\n1-> "<<nums[1]<<endl<<endl;
    while(nums[1] > 0 && nums[2] > 0) nums[1]--, nums[2]--, nums[3]++;     
    // cout<<"4-> "<<nums[4]<<"\n3-> "<<nums[3]<<"\n2-> "<<nums[2]<<"\n1-> "<<nums[1]<<endl<<endl;
    while(nums[1] > 2) nums[1]-=3, nums[3]++;
    // cout<<"4-> "<<nums[4]<<"\n3-> "<<nums[3]<<"\n2-> "<<nums[2]<<"\n1-> "<<nums[1]<<endl<<endl;
    while(nums[1] > 1) nums[1]-=2, nums[4]++;
    // cout<<"4-> "<<nums[4]<<"\n3-> "<<nums[3]<<"\n2-> "<<nums[2]<<"\n1-> "<<nums[1]<<endl<<endl;
    cout<<nums[4]+nums[3]+nums[2]+nums[1];
    return 0;
}