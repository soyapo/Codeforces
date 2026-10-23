#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	string wordx, wordy, is_valid = "1";
	cin>>wordx>>wordy;
	reverse(wordy.rbegin(), wordy.rend());
	if(wordx.length() != wordy.length()) is_valid = "0";
	else for(int i = 0; i < wordx.length(); i++){
		if(wordx[i] != wordy[i]){
			is_valid = "0";
			break;
		}
	}
	is_valid = (is_valid == "1") ? "YES" : "NO";
	cout<<is_valid;	
}
