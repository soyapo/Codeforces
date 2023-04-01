#include<bits/stdc++.h>
using namespace std;
int countDistinct(int arr[], int n, int res){
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j]) break;
        if (i == j) res++;
    }
    return res;
}
int main(){
	int n, m, is_valid = 1, temp; cin>>n>>m;
	int chars[m];
	string test_1, test_2;
	for(int i = 0; i < n; i++){
		test_2 = test_1;
		cin>>test_1;
		if(test_2 == test_1) is_valid = 0;
		for(int j = 0; j < m; j++){
			stringstream obj;  
	    	obj << test_1[j];   
	    	obj >> temp;
	    	chars[j] = temp;
		}
		int len = sizeof(chars) / sizeof(chars[0]);
		len = countDistinct(chars, len, 1);
		if(len!=1) is_valid = 0;
	}
	if(is_valid) cout<<"YES";
	else cout<<"NO";
	return 0;
}