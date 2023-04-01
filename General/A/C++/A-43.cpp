#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
pair <string, int> nums[2];
int main(){
    fst
    int n, indx = 0; cin>>n;
    string now, then, winner; cin>>now;
    nums[indx].first = now, nums[indx].second++;
    for(int i = 1; i < n; i++){
        then = now;
        cin>>now;
        if(now == then) nums[indx].second++;
        else indx = 1 - indx, nums[indx].first = now, nums[indx].second++;
    }
    winner = nums[0].second > nums[1].second ? nums[0].first : nums[1].first;
    cout<<winner;
    return 0;
}
/*
      ___                       ___           ___           ___           ___           ___     
     /\__\          ___        /\  \         /\__\         /\__\         /\  \         /\  \    
    /:/  /         /\  \      /::\  \       /:/  /        /:/  /        /::\  \       /::\  \   
   /:/__/          \:\  \    /:/\:\  \     /:/__/        /:/__/        /:/\:\  \     /:/\ \  \  
  /::\  \ ___      /::\__\  /:/  \:\  \   /::\  \ ___   /::\__\____   /::\~\:\  \   _\:\~\ \  \ 
 /:/\:\  /\__\  __/:/\/__/ /:/__/ \:\__\ /:/\:\  /\__\ /:/\:::::\__\ /:/\:\ \:\__\ /\ \:\ \ \__\
 \/__\:\/:/  / /\/:/  /    \:\  \  \/__/ \/__\:\/:/  / \/_|:|~~|~    \/__\:\/:/  / \:\ \:\ \/__/
      \::/  /  \::/__/      \:\  \            \::/  /     |:|  |          \::/  /   \:\ \:\__\  
      /:/  /    \:\__\       \:\  \           /:/  /      |:|  |          /:/  /     \:\/:/  /  
     /:/  /      \/__/        \:\__\         /:/  /       |:|  |         /:/  /       \::/  /   
     \/__/                     \/__/         \/__/         \|__|         \/__/         \/__/    
*/