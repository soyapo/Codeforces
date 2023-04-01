#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, s, first;
    string full = "";
    cin >> m >> s;
    int s2 = s;
    if ((s == 0 && m > 1) || (s > 0 && 9 * m < s)){
        cout << "-1 -1";
        return 0;
    }
    first = max(min(s, 1), s - (9 * (m - 1)));
    s -= first;
    full.append(to_string(first));
    for (int i = 1; i < m; i++) s -= max(0, s - (9 * (m - i - 1))), full.append(to_string(max(0, s - (9 * (m - i - 1)))));
    full.append(" ");
    for(int i = 0; i < m; i++){
        if(s2>9) full.append("9"), s2-=9;
        else full.append(to_string(s2)), s2 = 0;
    }
    cout<<full;
    return 0;
}