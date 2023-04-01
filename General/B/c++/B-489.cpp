#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int n, m, a, c = 0, boy[100], gal[100];
int main(){
    fst 
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>boy[i];
    cin>>m;
    for(int i = 0; i < m; i++)
        cin>>gal[i];
    sort(boy, boy + n);
    sort(gal, gal + m);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            if(abs(boy[i] - gal[j]) <= 1){
                c++, gal[j] = -10; 
                break;
            }
        }
    cout<<c;
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