#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, p = 0, c = 0, t; cin>>n;
    for(int i = 0; i < n; i++){
        cin>>t;
        if(t > 0) p+=t;
        else{
            if(p > 0) p--;
            else c++;
        }
    }
    cout<<c;
    return 0;
}