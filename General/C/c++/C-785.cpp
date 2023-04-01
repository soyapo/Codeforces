#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int n, m, l, r, mid, a; cin>>n>>m;
	if (m >= n) cout<<n<<endl;
	else{
		l = 0, r = INT_MAX;
		while (r - l > 1) {
			mid = (l + r) / 2;
			if (n - ((mid*(mid+1)) / 2) <= m) r = mid;
			else l = mid;
		}
		cout <<r + m<< endl;
	}
	return 0;
}