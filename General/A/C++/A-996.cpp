#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, counter = 0; cin>>n;
    while(n >= 100) counter++, n-=100;
    while(n >= 20) counter++, n-=20;
    while(n >= 10) counter++, n-=10;
    while(n >= 5) counter++, n-=5;
    while(n >= 1) counter++, n-=1;
    cout<<counter;
    return 0;
}