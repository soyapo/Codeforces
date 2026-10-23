#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 2e5 + 10;
int nums[mn], dp[mn];
int main(){
    fst
    int T, n, z, mz, lo; cin>>T;
    long long int s, g;
    while(T--){
        cin>>n;
        for(int i = 0; i < n; i++)
            cin>>nums[i];
        z = 0, s = 0, mz = -1, lo = -1;
        for(int i = n - 1; i >= 0; i--)
            dp[i] = z, mz = (!nums[i] ? i : mz), lo = (nums[i] && lo == -1 ? i : lo), s += (nums[i] ? z : 0), z = (!nums[i] ? z + 1 : z);
        g = 0;
        if(mz != -1) g = max(g, (long long int)dp[mz] - mz);
        if(lo != -1) g = max(g, (long long int)(n - z - 1) - dp[lo]);
        cout<<s + g<<'\n';
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