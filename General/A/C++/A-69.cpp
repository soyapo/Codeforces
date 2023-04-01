#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int lines, c1=0, c2=0, c3=0, t1, t2, t3; cin>>lines;
	for(int i = 0; i < lines; i++){
		cin>>t1>>t2>>t3;
		c1+=t1, c2+=t2, c3+=t3;
	}
	if(c1!=0 || c2!=0 || c3!=0) cout<<"NO";
	else cout<<"YES";
	return 0;
}
