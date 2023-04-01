#include <bits/stdc++.h>
using namespace std ;
int main() {
	int n, temp = 0, x_pos = 0, y_pos = 0;
	for(int i = 1;i <= 5;i++) {
		for(int j = 1; j <= 5; j++) {
			cin>>temp;
			if(temp == 1) x_pos = i, y_pos = j;
		}	
	}
	cout<<abs(x_pos-3)+abs(y_pos-3);
	
	return 0;
}
  