#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int a, b, j = 0; cin>>a>>b;
    while(a>0){ 
        a--, j++;
        if (j%b==0) a++;
    }
    cout<<j;
    return 0;
}