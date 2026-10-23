#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    long long int a, x, ans = 1, nums[305], mod = 1000000007;
    string s, list = "";
	cin>>s;
	for (char i = '0'; i <= '9'; i++) list += i;
	for (char i = 'A'; i <= 'Z'; i++) list += i;
	for (char i = 'a'; i <= 'z'; i++) list += i;
	list += "-_";
	for (int i = 0; i < 64; i++) nums[list[i]] = i;
	for (int i = 0; i < s.length(); i++){
		x = nums[s[i]];
		for (int j = 0; j < 6; j++) ans = (x&(1<<j)) == 0 ? (ans*3)%mod : ans; 
	}
	cout<<ans<<'\n';
	return 0;
}