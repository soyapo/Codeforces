#include <bits/stdc++.h>
using namespace std;
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, cnt = 0; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin>>a[i], a[i]--;
	vector <bool> flag(n);
	for (int i = 0; i < n; i++)
		for (int j = i; !flag[j]; j = a[j]) flag[j] = true, cnt += (j != i);
	if (cnt % 2 != n % 2) cout << "Um_nik" << '\n';
	else cout << "Petr" << '\n';
}