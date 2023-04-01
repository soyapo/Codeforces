#include <bits/stdc++.h>
using namespace std;
const int MAXN = 60;
char chars[MAXN][MAXN];
int main(){
	int n, m; cin>>n>>m;
	int left=60, right=-1, top=50, bot=-1;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>chars[i][j];
			if(chars[i][j]=='*') left = min(left, j), right = max(right, j), top = min(top, i), bot = max(bot, i);
		}
	}
	for(int i = top; i<=bot; i++){
		for(int j = left; j<=right; j++) cout<<chars[i][j];
		cout<<endl;	
	}
	return 0;
}
