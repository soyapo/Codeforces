#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, c, e;
    cin >> t;
    while (t--){
        cin >> n;
        e = n % 2 == 0 ? 1 : 0;
        if (e) cout << n - 3 << " 2 1\n";
        else{
            for(int i = 2; i < n - 3; i++){
                if(i+(n-i-1)+1 == n && __gcd(i, n-i-1) == 1){
                    cout<<i<<" "<<n-i-1<<" "<<1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}