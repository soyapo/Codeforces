#include <bits/stdc++.h>
using namespace std ;
int main() {
	string str, newstr[110]; cin>>str;
    char c = '+';
    for(int i=0;i<str.length();i++) if(str[i]!=c) newstr[i] = str[i]; 
    sort(newstr, newstr+110);
    for(int i = 0; i<110; i++){
    	if(newstr[i] != "" && i < 109) cout<<newstr[i]<<"+";
		if(newstr[i] != "" && i == 109) cout<<newstr[i];
	}
	return 0;
}