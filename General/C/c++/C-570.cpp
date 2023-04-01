#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, m, query_int, count = 0;
    string test;
    cin >> n >> m >> test;
    for (int i = 0; i < n - 1; i++) if (test[i] == '.' && test[i + 1] == '.') ++count;
    for (int i = 0; i < m; i++){
        cin >> query_int;
        if ((test[query_int - 2] == '.' && test[query_int - 1] == '.') || (test[query_int - 1] == '.' && test[query_int] == '.')) count--;
        cin >> test[query_int - 1];
        if ((test[query_int - 2] == '.' && test[query_int - 1] == '.') || (test[query_int - 1] == '.' && test[query_int] == '.')) count++;
        cout << count << endl;
    }
    return 0;
}