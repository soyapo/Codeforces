#include <bits/stdc++.h>
using namespace std ;
int main() {
	int count = 0, temp = 0, counter_main = 0, counter_sub = 0; cin>>count;
	for(int i = 0; i<count;i++){
		counter_sub = 0;
		for(int j = 0; j < 3; j++){
			cin>>temp;
			if(temp == 1) counter_sub++;
		}
		if(counter_sub >1) counter_main++;
	}
	cout<<counter_main;
	return 0;
}
  