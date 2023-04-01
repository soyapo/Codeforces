#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s, t, sp = "", temp;
    while (n--){
        cin >> s >> t;
        int a = count(s.begin(), s.end(), 'a'), b = count(s.begin(), s.end(), 'b'), c = count(s.begin(), s.end(), 'c');
        if (s.length() < 3 || a < 1 || b < 1 || c < 1){
            sort(s.begin(), s.end());
            cout << s << endl;
        }
        else{
            if (t == "abc" || t == "acb"){
                if (t[1] == 'c'){
                    sort(s.begin(), s.end());
                    cout << s << endl;
                }
                else{
                    sort(s.begin(), s.end());
                    for (int i = 0; i < a; i++) sp.append("a");
                    for (int i = 0; i < c; i++) sp.append("c");
                    for (int i = 0; i < b; i++) sp.append("b");
                    for (int i = a + b + c; i < s.length(); i++) sp.append(to_string(s[i]));
                    cout << sp << endl;
                    sp.clear();
                }
            }
            else{
                sort(s.begin(), s.end());
                cout << s << endl;
            }
        }
    }
    return 0;
}