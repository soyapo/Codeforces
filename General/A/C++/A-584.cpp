#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int n, t; cin>>n>>t;
    if(t == 10) 
        if(n < 2)
            return cout<<-1, 0;
        else
            return cout<<string(n - 1, '1')<<0, 0;
    for(int i = 0; i < n; i++)
        cout<<t;   
    return 0;
}