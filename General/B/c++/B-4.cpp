#include <iostream>
using namespace std;
int main(){
    int d, st, mn = 0, mx = 0; cin>>d>>st;
    pair <int, int> nums[d];
    int sch[d], req = st;
    for(int i = 0; i < d; i++){
        cin>>nums[i].first>>nums[i].second;
        mn += nums[i].first, mx += nums[i].second, sch[i] = nums[i].first;
    }
    if(req < mn || req > mx) return cout<<"NO\n", 0;
    st -= mn;
    if(st > 0){
        for(int i = 0; i < d; i++){
            int pos = nums[i].second - nums[i].first;
            if(pos <= st) sch[i] += pos, st -= pos;
            else{
                sch[i] += st;
                break;
            }
        }
    }
    cout<<"YES\n";
    for(int i = 0; i < d; i++) cout<<sch[i]<<' ';
}
/*
      ___                       ___           ___           ___           ___           ___     
     /\__\          ___        /\  \         /\__\         /\__\         /\  \         /\  \    
    / /  /         /\  \      /  \  \       / /  /        / /  /        /  \  \       /  \  \   
   / /__/          \ \  \    / /\ \  \     / /__/        / /__/        / /\ \  \     / /\ \  \  
  /  \  \ ___      /  \__\  / /  \ \  \   /  \  \ ___   /  \__\____   /  \ \ \  \   _\ \ \ \  \ 
 / /\ \  /\__\  __/ /\/__/ / /__/ \ \__\ / /\ \  /\__\ / /\  ___\__\ / /\ \ \ \__\ /\ \ \ \ \__\
 \/__\ \/ /  / /\/ /  /    \ \  \  \/__/ \/__\ \/ /  / \/_| |  |     \/__\ \/ /  / \ \ \ \ \/__/
      \  /  /  \  /__/      \ \  \            \  /  /     | |  |          \  /  /   \ \ \ \__\  
      / /  /    \ \__\       \ \  \           / /  /      | |  |          / /  /     \ \/ /  /  
     / /  /      \/__/        \ \__\         / /  /       | |  |         / /  /       \  /  /   
     \/__/                     \/__/         \/__/         \|__|         \/__/         \/__/    
*/