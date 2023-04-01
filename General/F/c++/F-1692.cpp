#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, n, a; cin>>t;
    while(t--){
        cin>>n;
        map <int, int> nums;
        vector <int> nums2;
        for(int i = 0; i < n; i++){
            cin>>a;
            nums[a % 10]++;
            if(nums[a % 10] < 3) 
                nums2.push_back((a % 10));
        }
        int c = nums2.size(), valid = 0;
        for(int i = 0; i < c; i++)
            for(int j = i + 1; j < c; j++)
                for(int k = j + 1; k < c; k++)
                    if((nums2[i] + nums2[j] + nums2[k]) % 10 == 3)
                        valid = 1;
        cout<<(valid ? "YES\n" : "NO\n");
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