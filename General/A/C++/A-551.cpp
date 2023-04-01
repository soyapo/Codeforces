#include <bits/stdc++.h>
using namespace std;
const int mn = 2000;
pair<int, int> nums[mn];
int final[mn];
int main(){
    int n, score, counter = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> score;
        nums[i] = {score, i};
    }
    sort(nums, nums + n);
    for (int i = n - 1; i >= 0; i--){
        if(i == n - 1) final[nums[i].second] = counter+1;
        else{
            if(nums[i].first != nums[i+1].first) counter = n-i-1;
            final[nums[i].second] = counter+1;
        }
    }
    for(int i = 0; i < n; i++) cout<<final[i]<<" ";
    return 0;
}