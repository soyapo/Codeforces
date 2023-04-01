#include <bits/stdc++.h>
using namespace std ;
int main() {
	string str, temp, x;
    cin>>str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
	for(int i = 0; i<str.length();i++){
		if(str[i] == 'a' || str[i] == 'o' || str[i] == 'u' || str[i] == 'e' || str[i] == 'i' || str[i] == 'y') str[i] = str[i];
		else{
			x = "";
			x.append(1, '.');
			x.append(1, str[i]);
			temp.append(x);
		}
	}
	cout<<temp;
	return 0;
}