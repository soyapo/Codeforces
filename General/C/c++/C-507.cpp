#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	long long h, n, a = 0, dir = 0;
	cin >> h >> n;
	n-=1;
	for (int i = h - 1; i >= 0; i--){
		if(((n>>i)&1) == dir) dir = 1 - dir, a++;
		else a += (1LL<<(i + 1));
	}
	cout << a << '\n';
	return 0;
}