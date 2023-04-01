#include<bits/stdc++.h>
using namespace std;
int main() {
	int w_1;
	int w_2;
	int year;
	cin>>w_1>>w_2;
	while(w_1 <= w_2){
		w_1 *= 3;
		w_2 *= 2;
		year++;
	}
	cout<<year;
	return 0;
}