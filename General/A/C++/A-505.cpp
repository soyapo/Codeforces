#include<bits/stdc++.h>
using namespace std;
int main(){
    string test, temp, rev; cin>>test;
    int len = test.length(), index = 0, is_valid = 0;
    for(index; index <= len; index++){
        temp = test.substr(0, index) + 'a' + test.substr(index, len), temp[index] = temp[len - index], rev = temp;
        reverse(rev.begin(), rev.end());
        if(rev == temp){
            is_valid = 1;
            break;
        }
    }
    if(is_valid) cout<<rev;
    else cout<<"NA";
    return 0;
}