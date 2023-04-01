#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m, ended = 0; cin>>n>>m;
	while(ended != 1){
		for(int i = 1; i<=n; i++){
			if(m-i>=0) m -= i;
			else ended = 1;
		}
	}
	cout<<m;
	return 0;
}
