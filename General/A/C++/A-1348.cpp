#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, n; cin >> t;
    while (t--){
        cin >> n;
        cout << 2 * (pow(2, n / 2) - 1) << endl;
    }
    return 0;
}