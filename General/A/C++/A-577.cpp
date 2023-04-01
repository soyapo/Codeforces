#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int n, x, c = 0; cin>>n>>x;
    for(int i = 1; i <= n; i++)
        if(x % i == 0 && x / i <= n)
            c++;
    cout<<c;
    return 0;
}