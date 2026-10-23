#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    long long int n, two = 0, a = 1; cin>>n;
    for(int i = 0; i < n; i++){
        if(two == 2) a = 1 - a, two = 0;
        if(a) cout<<'a';
        else cout<<'b';
        two++;
    }
    return 0;
}