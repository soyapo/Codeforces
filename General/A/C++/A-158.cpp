#include <bits/stdc++.h>
using namespace std ;
int main() {
	int n = 0, k = 0, temp = 0, arr[n]; cin>>n>>k;
	for(int i = 0; i<n; i++) cin>>arr[i];
	int measure = arr[k-1], counter = 0;
	for(int i = 0; i<n; i++)
		if(arr[i]>=measure && arr[i] > 0) counter++;	
	cout<<counter;
	return 0;
}
  