#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    string seq;
    int n, cn = 0;
    cin>>n>>seq;
    for(int i = 0; i < n && seq[i] == '<'; i++) cn++;
    for(int i = n - 1; i >= 0 && seq[i] == '>'; i--) cn++;
    cout<<cn;
    return 0;
}