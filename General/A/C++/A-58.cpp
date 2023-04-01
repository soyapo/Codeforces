#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string s; cin>>s;
    int index = 0;
    for(int i = 0; i < s.length(); i++){
        if(index == 0 && s[i] == 'h') index++;
        else if(index == 1 && s[i] == 'e') index++;
        else if(index == 2 && s[i] == 'l') index++;
        else if(index == 3 && s[i] == 'l') index++;
        else if(index == 4 && s[i] == 'o') index++;
    }
    if(index == 5) cout<<"YES";
    else cout<<"NO";
	return 0;
}