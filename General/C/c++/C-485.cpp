#include <bits/stdc++.h>
using namespace std;
const int MN = 1e9, N = 3222;
int main(){
	int n, ans = MN, a[N][2]; cin>>n;
	for (int k = 0; k < 2; k++)
		for (int i = 0; i < n; i++) cin>>a[i][k];
	for (int i = 0; i < n; i++){
		int b = -1, cost = a[i][1];
		for (int j = 0; j < i; j++) {
			if (a[j][0] >= a[i][0]) continue;
			if (b == -1 || a[b][1] > a[j][1]) b = j;
		}
		if (b == -1) continue;
		cost += a[b][1], b = -1;
		for (int j = i + 1; j < n; j++) {
			if (a[j][0] <= a[i][0]) continue;
			if (b == -1 || a[b][1] > a[j][1]) b = j;
		}
		if (b == -1) continue;
		cost += a[b][1], ans = min(ans, cost);
	}
	if (ans == MN) cout<<"-1\n";
	else cout<<ans<<endl;
	return 0;
}