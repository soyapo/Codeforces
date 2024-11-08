#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int t; cin>>t;
    while(t--){
        int a = 0, b = 0;
        string s;
        cin>>s;
        for(int i = 0; i < 5; i++)
            (s[i] == 'A' ? a++ : b++);
        cout<<(a > b ? "A\n" : "B\n");
    }
    return 0;
}