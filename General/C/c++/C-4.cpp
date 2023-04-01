#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    map <string, int> names;
    string temp;
    for(int i = 0; i < n; i++){
        cin>>temp;
        if(names[temp] == 0) cout<<"OK\n";
        else cout<<temp<<names[temp]<<endl;
        names[temp]++;
    }
    return 0;
}