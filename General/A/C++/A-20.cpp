#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int p = 1, n[2];
int main(){
    fst
    string s, t = ""; cin>>s;
    for(int i = 0; i < s.length(); i++)
        if(s[i] == '/' && p)
            t += s[i], p = 0, n[0]++;
        else if(s[i] != '/')
            t += s[i], p = 1, n[1]++;
    for(int i = t.length() - 1; i >= 0; i--)
        if(t[i] != '/') 
            break;
        else 
            t.pop_back();
    cout<<(n[1] == 0 ? "/" : t);
    return 0;
}