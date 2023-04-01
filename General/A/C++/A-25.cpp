#include <bits/stdc++.h>
using namespace std;
pair <int, int> evens[100];
pair <int, int> odds[100];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, tmp, e = 0, o = 0; cin>>n;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        if(tmp%2==0) evens[e] = {tmp, i + 1}, e++;
        else odds[o] = {o, i + 1}, o++;
    }
    if(e>o) cout<<odds[0].second;
    else cout<<evens[0].second;
    return 0;
}