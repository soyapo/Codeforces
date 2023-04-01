#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int nums[4], cal = 0;
    string s;
    for(int i = 0; i < 4; i++) cin>>nums[i];
    cin>>s;
    for(int i = 0; i < s.length(); i++) cal += nums[(s[i] - '0') - 1];
    cout<<cal;
    return 0;
}