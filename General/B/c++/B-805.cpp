#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n, two = 0, a = 1; cin>>n;
    for(int i = 0; i < n; i++){
        if(two == 2) a = 1 - a, two = 0;
        if(a) cout<<'a';
        else cout<<'b';
        two++;
    }
    return 0;
}