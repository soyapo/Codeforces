#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, d, now, then, count = 0, temp; cin>>n>>d>>then;
    for(int i = 0; i < n; i++){
        cin>>now;
        if(now <= then) temp = ((then-now)/d) + 1, count += temp, now += (temp * d);
        then = now;
    }
    cout<<count;
    return 0;
}