#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string s; cin>>s;
    int i = 0;
    while(i < s.length()){
        if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'){
            i+=3;
            cout<<" ";
        }
        else{
            cout<<s[i];
            i++;
        }
    }
    return 0;
}