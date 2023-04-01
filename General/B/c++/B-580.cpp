#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const long long mn = 1e5 + 6;
pair <long long, long long> nums[mn];
int main(){
    fst
    long long n, d, sum = 0, ans = 0, lft = 0;
    cin>>n>>d;
    for(long long i = 0; i < n; i++)
        cin>>nums[i].first>>nums[i].second;
    sort(nums, nums + n);
    for(long long i = 0; i < n; i++){
		sum += nums[i].second;
		while (nums[i].first - nums[lft].first >= d)
			sum -= nums[lft].second, lft++;
		ans = max(ans, sum);
	}
    cout<<ans;
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