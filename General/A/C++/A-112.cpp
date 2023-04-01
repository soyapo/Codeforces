#include <bits/stdc++.h>
using namespace std ;
int main() {
	string name_1, name_2; cin>>name_1>>name_2;
	transform(name_1.begin(), name_1.end(), name_1.begin(), ::tolower);
	transform(name_2.begin(), name_2.end(), name_2.begin(), ::tolower);
	int equalOrNot = name_1.compare(name_2); 
	if(!equalOrNot) cout << "0";
	else if(equalOrNot > 0) cout << "1";
	else cout << "-1";
	return 0;
}
  