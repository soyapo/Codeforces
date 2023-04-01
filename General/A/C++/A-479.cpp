#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int a, b, c, m = a + b + c; cin>>a>>b>>c;
    m = max(m, a*b*c), m = max(m, a*b+c), m = max(m, a+b*c), m = max(m, a*(b+c));
    cout<<max(m, (a+b)*c);
    return 0;
}