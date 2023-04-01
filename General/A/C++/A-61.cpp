#include<bits/stdc++.h>
using namespace std;
int main() {
	string num1, num2; cin>>num1>>num2;
	int chars[num1.length()];
	for(int i = 0; i < num1.length(); i++){
		if(num1[i] == num2[i]) chars[i] = 0;
		else chars[i] = 1;
	}
	for(int i = 0; i < num1.length(); i++) cout<<chars[i];
	return 0;
}