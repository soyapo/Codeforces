#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const int mn = 1e6 + 10;
int pos[mn];
int main(){
	fst
	int n, q, p1 = 0, p2 = 1, c, x, t; cin>>n>>q;
	for(int i = 0; i < q; i++){
		cin>>c;
		if(!(c - 1)){
			cin>>x;
			p1 = (p1 + x + n) % n, p2 = (p2 + x + n) % n;
		} 
		else
			p1 ^= 1, p2 ^= 1;
	}
	for(int i = 1; i <= n; i += 2)
		pos[p1] = i, p1 = (p1 + 2) % n;
	for(int i = 2; i <= n; i += 2)
		pos[p2] = i, p2 = (p2 + 2) % n;
	for(int i = 0; i < n; i++) 
		cout << pos[i] << ' ';
	return 0;
}