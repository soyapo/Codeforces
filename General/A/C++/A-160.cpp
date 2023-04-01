#include <bits/stdc++.h>
using namespace std;
int sumupto(int arr[], int upto){
    int sum = 0;
    for(int i = 0; i < upto; i++) sum+=arr[i];
    return sum;
}
int main(){
    int n, sum = 0, sounter= 0, nums[n]; cin>>n;
    for(int i = 0; i < n; i++) cin>>nums[i];
    if(n == 1 || (n == 2 && nums[0] == nums[1])){    
        cout<<n;
        return 0;
    }
    for(int i = 0; i < n; i++){
		for(int j = 0; j < n-i; j++){
			if(nums[j]>nums[j+1]) swap(nums[j], nums[j+1]);
		}	
	}
    while(sum <= sumupto(nums, n)) sum += nums[n-1], n = n - 1, sounter = sounter + 1;
    cout<<sounter;
    return 0;
}