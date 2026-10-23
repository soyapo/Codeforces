#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	int cost_initial, cost_final = 0, balance, banana;
	cin>>cost_initial>>balance>>banana;
	for(int i = 1; i <= banana; i++) cost_final += cost_initial*i;
	if(balance-cost_final >= 0) cout<<0;
	else cout<<abs(balance-cost_final);
	return 0;
}