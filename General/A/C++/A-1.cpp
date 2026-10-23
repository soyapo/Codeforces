#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	long long int n,m,a,x,y; cin>>n>>m>>a;
	x = n%a == 0 ? n/a : (n/a) + 1, y = m%a == 0 ? m/a : (m/a) + 1;
	cout<<x*y;
	return 0;
}