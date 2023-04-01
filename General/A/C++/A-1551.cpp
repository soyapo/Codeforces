#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, n; cin >> t;
    while (t--){
        cin >> n;
        int c1 = n / 3, c2 = n / 3;
        if(n % 3 == 1) c1++;
        else if (n % 3 == 2) c2++;
        cout<<c1<<" "<<c2<<endl;
    }
    return 0;
}