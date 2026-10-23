#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	int x; cin>>x;
	if(x % 2 != 0 || x == 2) cout<<"NO";
	else cout<<"YES";
	return 0;
}