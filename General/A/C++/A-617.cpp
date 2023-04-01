#include<bits/stdc++.h>
using namespace std;
int main() {
	int d;
	int test = 5;
	int counter;
	cin>>d;
	while(d > 0){
		counter += d/test;
		d = d%test;
		test--;
	}
	cout<<counter;
	return 0;
}