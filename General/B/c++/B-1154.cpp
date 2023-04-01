#include <bits/stdc++.h>
using namespace std;
int nums[105];
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, tmp, cnt = 0, mn = 101, mx = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        nums[tmp]++;
        mx = max(mx, tmp); mn = min(mn, tmp);
    }
    for(int i = 1; i <= 100; i++) 
        if(nums[i]>0) 
            cnt++;
    if(cnt>3) 
        cout<<"-1";
    else if(cnt == 1) 
        cout<<0;
    else if(cnt == 2)
        if(mx%2==mn%2)
            cout<<(mx-mn)/2;
        else
            cout<<mx - mn;
    else if(cnt == 3){
        if(mn%2 == mx%2 && nums[((mx-mn)/2) + mn] > 0) 
            cout<<(mx-mn)/2;
        else 
            cout<<"-1";
    }
}