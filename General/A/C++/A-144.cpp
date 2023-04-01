#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int nums[102];
int main(){
    fst
    int n, t1; cin>>n;
    pair <int, int> c[2];
    cin>>t1;
    c[0].first = t1, c[1].first = t1, c[0].second = 0, c[1].second = 0;
    for(int i = 1; i < n; i++){
        cin>>t1;
        if(t1 > c[1].first) c[1].first = t1, c[1].second = i;
        if(t1 <= c[0].first) c[0].first = t1, c[0].second = i;
    }
    if(c[1].second > c[0].second)
        cout<<c[1].second + (n - c[0].second - 1) - 1;
    else
        cout<<c[1].second + (n - c[0].second - 1);
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