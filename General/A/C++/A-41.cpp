#include <bits/stdc++.h>
using namespace std;
int main(){
	string wordx, wordy, is_valid = "1";
	cin>>wordx>>wordy;
	reverse(wordy.rbegin(), wordy.rend());
	for(int i = 0; i < wordx.length(); i++){
		if(wordx[i] != wordy[i]){
			is_valid = "0";
			break;
		}
	}
	is_valid = (is_valid == "1") ? "YES" : "NO";
	cout<<is_valid;	
}
