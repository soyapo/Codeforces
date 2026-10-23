#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t, n; cin >> t;
    string full = "", temp;
    while (t--){
        cin >> n;
        for (int i = 0; i < n - 2; i++){
            if (i == 0) cin >> full;
            else {
                cin >> temp;
                if (temp[0] == full[full.length() - 1]) full.append(1, temp[1]);
                else full.append(temp);
            }
        }
        if (full.length() < n) full.append("b");
        cout << full << '\n';
        full.clear();
    }
    return 0;
}