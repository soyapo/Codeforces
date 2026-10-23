#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(0); cin.tie(NULL);
   int counter = 0, arr[4] = {0, 0, 0, 0};
   for(int i = 0; i < 4; i++) cin>>arr[i];
   for(int i = 0; i < 4; i++){
		for(int j = i+1; j < 4; j++){
			if(arr[i]==arr[j]) {counter++; break;}
   	}
   }
   cout << counter;
   return 0;
}
