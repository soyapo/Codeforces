#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 1e5 + 10;
int nums[mn];
int main(){
    fst
	int n, p1 = 0, p2 = 0;
	cin>>n;
	for(int i = 0; i < n; i++) 
        cin>>nums[i];
	for(int i = 0; i < n; i++){ 
        if(nums[i] > nums[i + 1]){
		    p1 = i;
		    break;
	    }
    }
	for(int i = 1; i < n; i++)
        if(nums[i - 1] > nums[i])
		    p2 = i;
	reverse(nums + p1, nums + p2 + 1);
	for(int i = 0; i < n - 1; i++)
        if(nums[i + 1] < nums[i])
            return cout<<"no", 0;
    int in = 1;
	for(int i = 0; i < n - 1; i++)
        if(nums[i] < nums[i + 1]) 
            in++;
    if(in == n) 
        cout<<"yes\n"<<p1 - 1<<' '<<p2 + 1<<'\n';
    else
        cout<<"yes\n"<<p1 + 1<<' '<<p2 + 1<<'\n';
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