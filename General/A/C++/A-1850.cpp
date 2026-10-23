#include <bits/stdc++.h>
using namespace std;
#define fst ios::sync_with_stdio(0); cin.tie(0);
    
int main() {
    fst
    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if (a + b >= 10 || a + c >= 10 || b + c >= 10)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}