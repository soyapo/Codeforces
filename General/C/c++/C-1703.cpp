#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int nums[110];
int main(){
    fst
    int t, n, b; cin>>t;
    char c;
    while(t--){
        cin>>n;
        for(int i = 0; i < n; i++)
            cin>>nums[i];
        for(int i = 0; i < n; i++){
            cin>>b;
            for(int j = 0; j < b; j++){
                cin>>c;
                nums[i] = (c == 'U' ? nums[i] - 1 : nums[i] + 1);
                if(nums[i] < 0) nums[i] = 9;
                else if(nums[i] > 9) nums[i] = 0;
            }
        }
        for(int i = 0; i < n; i++)
            cout<<nums[i]<<' ';
        cout<<'\n';
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