#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n, v; cin>>t;
    string s;
    while(t--){
        cin>>n>>s;
        v = 1;
        map <char, int> arr;
        for(int i = 0; i < n; i++){
            if(arr[s[i]]) v = 0;
            if(!v) break;
            if(s[i] != s[i + 1]) arr[s[i]]++; 
        }
        cout<<(v ? "YES\n" : "NO\n");
    }
  return 0;
}