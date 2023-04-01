#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t, m, n, mx = -1, nums[205][205];
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i = 0; i < n; i++)  
            for(int j = 0; j < m; j++)
                cin>>nums[i][j];
        int sum = 0, mx = -1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                sum += nums[i][j];
                int nn = i - 1, ww = j - 1;
                while(nn >= 0 && ww >= 0) sum += nums[nn][ww], nn--, ww--;
                nn = i + 1, ww = j + 1;
                while(nn < n && ww < m) sum += nums[nn][ww], nn++, ww++;
                nn = i - 1, ww = j + 1;
                while(nn >= 0 && ww < m) sum += nums[nn][ww], nn--, ww++;
                nn = i + 1, ww = j - 1;
                while(nn < n && ww >= 0) sum += nums[nn][ww], nn++, ww--;
                mx = max(mx, sum), sum = 0;
            }
        }
        cout<<mx<<'\n';
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