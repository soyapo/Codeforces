#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int n[6];
    for(int i = 0; i < 6; i++) cin>>n[i];
    cout<<(n[0] + n[1] + n[2]) * (n[0] + n[1] + n[2]) - ((n[0] * n[0]) + (n[2] * n[2]) + (n[4] * n[4]));
    return 0;
}