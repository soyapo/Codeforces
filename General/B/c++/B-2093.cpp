#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; cin>>t;
    string s;
    while (t--){
        cin>>s;
        int z = 0, last = s.length() - 1;
        while(s[last] == '0') last--;
        for(int i = 0; i < last; i++)
            z += (s[i] == '0');
        cout<<s.length() - 1 - z<<"\n";
    }
    return 0;
}