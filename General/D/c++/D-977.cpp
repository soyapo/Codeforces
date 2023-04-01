// Lotfan goosfand naboode va mask bezanid 
// -Hichkas
#include <bits/stdc++.h>
using namespace std;
const int mn = 1e2 + 5;
long long int a[mn], nxt[mn], deg[mn];
void lnk(long long int x, long long int y){
	nxt[x] = y;
    deg[y]++;
}
int main(){
	int n; cin>>n;
	for(int i = 1; i <= n; i++) cin>>a[i];
	sort(a + 1, a + n + 1);
	for(int i = 1, j; i <= n; i++){
		j = lower_bound(a + 1, a + n + 1, a[i] * 2) - a;
		if(a[j] == a[i] * 2) lnk(i, j);
		if(a[i] % 3 == 0){
			j = lower_bound(a + 1, a + n + 1, a[i] / 3) - a;
			if(a[j]==a[i] / 3)lnk(i, j);
		}
	}
	for(int i = 1; i <= n; i++)if(deg[i]==0){
		for(int j = i; j ; j = nxt[j]) cout<<a[j]<<" ";
		break;
	}
}
	   	   	  			 	 	 		 	  	  	