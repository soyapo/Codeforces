#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n, q, t, a, x, sum = 0;
    cin>>n>>q;
    string s = "";
    for(long long int i = 0; i < n; i++){
        cin>>a;
        sum += a, s += char(a);
    }
    for(long long int i = 0; i < q; i++){
        cin>>t;
        if(t == 2){
            cin>>x;
            sum = n * x, s = string(n, char(x));
            cout<<sum<<endl;
        }
        else{
            cin>>a>>x;
            sum += x - s[a - 1], s[a - 1] = char(x);
            cout<<sum<<endl;
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