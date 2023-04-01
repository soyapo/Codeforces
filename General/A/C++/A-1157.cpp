#include <bits/stdc++.h>
using namespace std;
const int mn = 2e5 + 5;
long long int a[mn];
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int n, cnt = 0; cin>>n;
    while(n>9){
        cnt++, n++;
        while(n % 10 == 0) n /= 10;
    }
    cout<<cnt+9;
}