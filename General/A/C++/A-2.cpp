#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1001;
int scores[MAXN];
string names[MAXN];
map<string, int> values;
map<string, int> temp;
int main(){
    int n, maks = 0;
    string winner;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> names[i] >> scores[i];
        values[names[i]] += scores[i];
    }
    for (int i = 0; i < n; i++) maks = max(maks, values[names[i]]);
    for (int i = 0; i < n; i++){
        temp[names[i]] += scores[i];
        if (values[names[i]] == maks && temp[names[i]] >= maks){
            winner = names[i];
            break;
        }
    }
    cout << winner;
    return 0;
}