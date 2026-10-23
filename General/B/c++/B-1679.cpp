#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    long long int n, q, t, a, x, sum = 0, all = 0, all_time = 0;
    cin>>n>>q;
    vector <long long int> s(n), upd(n, 0);
    for(long long int i = 0; i < n; i++){
        cin>>a;
        sum += a, s[i] = a;
    }
    for(long long int i = 0; i < q; i++){
        cin>>t;
        if(t == 2){
            cin>>x;
            sum = n * x, all = x, all_time = i + 1;
            cout<<sum<<'\n';
        }
        else{
            cin>>a>>x;
            if(upd[a - 1] < all_time) s[a - 1] = all;
            sum += x - s[a - 1], s[a - 1] = x, upd[a - 1] = i + 1;
            cout<<sum<<'\n';
        }
    }
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