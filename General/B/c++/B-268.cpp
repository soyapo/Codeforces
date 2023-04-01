#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, add = 2, add_to_add = 2, base = 1; cin>>n;
    while(n > 1) base+=add, add+=add_to_add, add_to_add++, n--;
    cout<<base;
    return 0;
}