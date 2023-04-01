#include<bits/stdc++.h>
using namespace std;
int main() {
	string colors;
	int count, counter;
	cin>>count>>colors;
	for(int i  = 0; i<colors.length();i++)
		if(colors[i] == colors[i+1]) counter++;
	cout<<counter;
}