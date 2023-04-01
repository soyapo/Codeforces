#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 3e3 + 10;
pair <pair<string, int>, pair<string, int> > nums[mn];
map <string, int> idx;
int main(){
    fst
    int n, m; cin>>n>>m;
    string s;
    for(int i = 0; i < m; i++){
        cin>>s;
        idx[s] = i, nums[i].first.first = s, nums[i].first.second = s.length();
        cin>>s;
        nums[i].second.first = s, nums[i].second.second = s.length();
    }
    for(int i = 0; i < n; i++){
        cin>>s;
        cout<<(nums[idx[s]].first.second <= nums[idx[s]].second.second ? nums[idx[s]].first.first : nums[idx[s]].second.first)<<'\n';
    }
    return 0;
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