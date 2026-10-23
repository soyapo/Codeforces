#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	string colors;
	int count, counter = 0;
	cin>>count>>colors;
	for(int i  = 0; i<colors.length();i++)
		if(colors[i] == colors[i+1]) counter++;
	cout<<counter;
}