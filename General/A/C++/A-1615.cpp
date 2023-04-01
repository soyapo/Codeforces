#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, temp, intemp; cin>>t;
    while(t--){
        cin>>n;
        temp = 0;
        for(int i = 0; i < n; i++){
            cin>>intemp;
            temp+=intemp;
        }
        if(temp%n == 0) cout<<"0\n";
        else cout<<"1\n";
    }
    return 0; 
}