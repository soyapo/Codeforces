#include<bits/stdc++.h>
using namespace std;
const int mn = 2e5 + 5;
long long int nums[mn], H, n, cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>H>>n;
	for(int i = 0; i < n; i++) {
		cin>>nums[i];
		nums[i] = i == 0 ? nums[i] : nums[i] += nums[i - 1];
		if (-nums[i] >= H) return cout<<i+1, 0;
	}
	if (nums[n - 1] >= 0) return cout<<-1, 0;
	cnt = H * n;
	for (int i = 0; i < n; i++) 
        cnt = min(cnt, (H + nums[i] - nums[n - 1] - 1) / - nums[n - 1] * n + i + 1);
	cout<<cnt;
    return 0;
}