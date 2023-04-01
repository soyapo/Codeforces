#include <bits/stdc++.h>
using namespace std;
const int mn = 2e5 + 5;
long long int a[mn];
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, cnt = 0, mx = -1; cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        if(a[i]==1) cnt++;
        else{ 
            mx = max(mx, cnt);
            cnt = 0;
        }
    }
    mx = max(mx, cnt);
    if(a[0] == 1 && a[n-1] == 1){
        int first, last;
        cnt = 0;
        for(int i = 0; i < n; i++){
            if(a[i]==1) cnt++;
            else break;
        }
        first = cnt;
        cnt = 0;
        for(int i = n-1; i >= 0; i--){
            if(a[i]==1) cnt++;
            else break;
        }
        mx = max(cnt+first, mx);
    }
    cout<<mx;
    return 0;
}