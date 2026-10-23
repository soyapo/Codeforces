#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	string players;
	int reached = 0, counter = 0;
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