#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	int d;
	int test = 5;
	int counter = 0;
	cin>>d;
	while(d > 0){
		counter += d/test;
		d = d%test;
		test--;
	}
	cout<<counter;
	return 0;
}