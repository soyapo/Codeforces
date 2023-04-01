#include<bits/stdc++.h>
using namespace std;
int main(){
   int counter = 0, arr[4] = {0, 0, 0, 0};
   for(int i = 0; i < 4; i++) cin>>arr[i];
   for(int i = 0; i < 4; i++){
		for(int j = i+1; i < 4; i++){
			if(arr[i]==arr[j]) counter++;				
   	}
   }
   cout << 4 - counter;
   return 0;
}
