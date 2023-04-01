#include <bits/stdc++.h>
using namespace std;
int get(int l, int r) {
	return int(rnd()) % (r - l + 1) + l;
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, cnt = 0; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin>>a[i];
	for (int i = 0; i < n; i++) cnt += a[i];
	if ((ld) cnt / n >= 0.999 && n != 5) cout << "Um_nik" << endl;
	else cout << "Petr" << endl;
}