#include <bits/stdc++.h>
using namespace std;
const int mn = 2e5 + 10;
long long int n, k, a, m, l, r, mid, nums[mn], nums_tmp[mn];
bool check(int tmp) {
	for (int i = 0; i < tmp; i ++) nums_tmp[i] = nums[i];
	sort(nums_tmp, nums_tmp + tmp);
	int s = nums_tmp[0] / (a + 1);
	for (int i = 1; i < tmp; i ++) s += 1ll * (nums_tmp[i] - nums_tmp[i - 1]) / (a + 1);
	s += (n - nums_tmp[tmp - 1] + 1) / (a + 1);
	if(s >= k) return true;
	else return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>k>>a>>m;
	for (int i = 0; i < m; i ++) cin>>nums[i];
	l = 0, r = m + 1;
	while (r - l > 1) {
		mid = (r + l) / 2;
		if (check(mid - 1)) l = mid;
		else r = mid;
	}
	if(check(l)) cout<<-1;
	else cout<<l;
	return 0;
}