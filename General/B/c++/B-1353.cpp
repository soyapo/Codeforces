#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int a[60], b[60]; 
int main(){
    fst
    int t, n, k; cin>>t;
    while(t--){
        cin>>n>>k;
        int cnt = 0, sum = 0, ii = 0;
        for(int i = 0; i < n; i++) cin>>a[i];
        for(int i = 0; i < n; i++) cin>>b[i];
        sort(a, a + n);
        sort(b, b + n);
        for(int i = n - 1 - ii; i >= 0; i--){
            for(int j = ii; j < n; j++){
                if(b[i] > a[j] && cnt < k){
                    a[j] = b[i], cnt++, ii++;
                    break;
                }
            }
        }
        for(int i = 0; i < n; i++) sum+=a[i];
        cout<<endl<<sum<<endl<<endl;
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