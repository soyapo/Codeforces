#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n; cin>>n;
    n = n % 2 == 0 ? n / 2 : ((n - 1) / 2) - n;
    cout<<n;
    return 0;
}