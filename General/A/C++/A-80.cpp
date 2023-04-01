#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n) {
    if (n == 1) return false;    
    int i = 2;
    while (i*i <= n) {
        if (n % i == 0) return false;
        i += 1;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m, is_next = 1; cin>>n>>m;
    for(int i = n + 1; i < m; i++) {
        if(is_prime(i)){
            is_next = 0;
            break;
        }
    }
    if(is_prime(n) && is_prime(m) && is_next) cout<<"YES";
    else cout<<"NO";
    return 0;
}