#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, count = 0; cin>>n;
    string tmp;
    char now = '#', then;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        if(i == 0) then = tmp[1];
        else{
            now = tmp[0];
            if(now == then) count++;
            then = tmp[1];
        }
    }
    cout<<count++;
    return 0;
}