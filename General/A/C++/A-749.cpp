#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int n; cin>>n;
    if(n % 2 == 0){
        cout<<n / 2<<'\n';
        for(int i = 0; i < n / 2; i++)
            cout<<2<<' ';
    }
    else{
        cout<<(n - 3) / 2 + 1<<'\n'<<3<<' ';
        for(int i = 0; i < (n - 3) / 2; i++)
            cout<<2<<' ';
    }
    return 0;
}