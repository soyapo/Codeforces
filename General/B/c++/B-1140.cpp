#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n, index = -1; cin>>t;
    string s;
    while(t--){
        cin>>n>>s;
        int f = s.find('>'), index = -1;
        for(int i = 0; i < n; i++)
            if(s[i] == '<')
                index = max(index, i);
        if(f == -1 || index == -1) cout<<0<<endl;
        else cout<<min(n-index-1, f)<<endl;
    }
    return 0;
}