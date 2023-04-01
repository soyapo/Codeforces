#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 2e5;
int nums[mn];
int main(){
    fst
    int t, n, q, x; cin>>t;
    while(t--){
        cin>>n>>q;
        for(int i = 0; i < n; i++) cin>>nums[i];
        sort(nums, nums + n);
        vector <int> vec;
        int sum = 0;
        for(int i = n - 1; i >= 0; i--){
            sum += nums[i];
            vec.push_back(sum);
        }
        for(int i = 0; i < q; i++){
            cin>>x;
            int f = lower_bound(vec.begin(), vec.end(), x) - vec.begin();
            cout<<(f == n ? -1 : f + 1)<<'\n';
        }
    }
    return 0;
}
/*
1
8 7
4 3 3 1 1 4 5 9
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