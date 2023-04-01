#include<bits/stdc++.h>
using namespace std;
int main(){
	string chars[9], temp;
	int valid = 1, index = 0;
	for(int i = 0; i<3; i++){
		cin>>temp;
		for(int j = 0; j < 3; j++) chars[index] = temp[j], index++;
	}
	if(chars[0] != chars[8] || chars[1] != chars[7] || chars[2] != chars[6] || chars[3] != chars[5]) valid = 0;	
	if(!valid) cout<<"NO";
	else cout<<"YES";
	return 0;
}