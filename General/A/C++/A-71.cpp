#include <bits/stdc++.h>
using namespace std ;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	int n; cin>>n;
	string w;
	while(n--){
		cin>>w;
		if(w.length() > 10) cout<<w[0]<<w.length() - 2<<w[w.length() - 1]<<'\n';  
	    else cout<<w<<'\n';
	}
	return 0;
}