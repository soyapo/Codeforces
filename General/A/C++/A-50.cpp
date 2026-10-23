#include <bits/stdc++.h>
using namespace std ;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	int n = 0, m = 0; cin>>n>>m;
	if(n%2 == 0) cout<<(n/2)*m;
	else cout<<((n/2)*m)+(m/2);
	return 0;
}
  