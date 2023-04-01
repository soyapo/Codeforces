#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, j = 0; cin>>a>>b;
    while(a>0){ 
        a--, j++;
        if (j%b==0) a++;
    }
    cout<<j;
    return 0;
}