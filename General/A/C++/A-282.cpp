#include <bits/stdc++.h>
using namespace std ;
int main() {
	int n, bit = 0; cin>>n;
	string temp, states[n];
	for(int i = 0; i < n; i++){
		cin>>temp;
		states[i] = temp;
	}
	for(int i = 0; i < n; i++){
		string temp_2 = states[i];
		if(temp_2[1] == '-') bit--;
		else bit++;
	}
	cout<<bit;
	return 0;
}
  