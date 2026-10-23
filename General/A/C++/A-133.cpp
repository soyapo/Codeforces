#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}