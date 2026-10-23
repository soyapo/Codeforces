#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int nums[110][110];
int main(){
    fst
    int t, n, a; cin>>t;
    while(t--){
        cin>>n;
        int z = 0, o = 0;
        for(int i = 0; i < n; i++){
            string s; cin>>s;
            for(int j = 0; j < n; j++){
                nums[i][j] = s[j] - '0';
                z = (nums[i][j] ? z : z + 1), o = (nums[i][j] ? o + 1 : o);
            }
        }
        if(n < 3)
            cout<<min(o, z)<<'\n';
        else{
            int ans = 0;
            for(int i = 0; i < n / 2; i++)
                for(int j = 0; j < (n / 2) + (n % 2); j++){
                    int c = nums[i][j] + nums[j][n - 1 - i] + nums[n - 1 - i][n - 1 - j] + nums[n - 1 - j][i];
                    ans += min(c, 4 - c);
                }
            cout<<ans<<'\n';
        }
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