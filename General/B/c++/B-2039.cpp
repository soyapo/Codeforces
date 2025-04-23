#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    string s;
    while (t--){
        cin>>s;
        int z = 0;
        for(int i = 0; i < s.length(); i++)
            z += (s[i] == '0');
        cout<<(z ? s.length() - z : s.length() - 1)<<"\n";
    }
    return 0;
}