#include <bits/stdc++.h>
using namespace std;
int good(int n){
    string str = to_string(n);
    if(str[3] == str[2] || str[3] == str[1] || str[3] == str[0] || str[2] == str[1] || str[2] == str[0] || str[1] == str[0]) return 0;
    return 1;
}
int main(){
    int n; cin>>n;
    do n++;
    while(good(n) == 0);
    cout<<n;
    return 0;
}