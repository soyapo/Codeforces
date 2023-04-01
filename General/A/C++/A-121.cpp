#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, tests[12] = {4, 7, 47, 74, 444, 777, 447, 744, 774, 477, 747, 474}, is_valid = 0;
	cin>>n;
	for(int i = 0; i < 12; i++)
		if(n%tests[i] == 0) is_valid = 1;
	if(is_valid) cout<<"YES";
	else cout<<"NO";
}
