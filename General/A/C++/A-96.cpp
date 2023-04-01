#include<bits/stdc++.h>
using namespace std;
int main() {
	string players;
	int reached = 0, counter;
	cin>>players;
	for(int i = 0; i<players.length();i++){
		if(players[i] == players[i+1]){
			counter++;
			if(counter >= 6) reached = 1;
		}
		else counter = 0;
	}
	if(!reached) cout<<"NO";
	else cout<<"YES";
	return 0;
}