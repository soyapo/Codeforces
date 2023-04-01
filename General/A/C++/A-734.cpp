#include <bits/stdc++.h>
using namespace std;
int main(){
	int danik = 0, anton = 0, count;
	string str;
	cin>>count>>str;
	for(int i = 0; i < count; i++){
		if(str[i] == 'D'){
			danik++;
		}
		else{
			anton++;
		}
	}
	if(danik>anton){
		cout<<"Danik";
	}
	else if(anton>danik){
		cout<<"Anton";
	}
	else{
		cout<<"Friendship";
	}
}
