#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
vector <int> p;
vector <int> n;
vector <int> z;
int main(){
    fst
    int t, a, tmp, i; cin>>t;
    for(i = 0; i < t; i++){
        cin>>a;
        if(a > 0) 
            p.push_back(a);
        if(a < 0) 
            n.push_back(a);
        else 
            z.push_back(a);
        if(a < 0) 
            tmp = a;
    }
    if(n.size() % 2 == 1){
        z.push_back(tmp);
        n.pop_back();
    }

    cout<<n.size()<<' ';
    for(auto u: n)
        cout<<u<<' ';

    cout<<'\n'<<p.size()<<' ';
    for(auto u: p)
        cout<<u<<' ';
    
    cout<<'\n'<<z.size()<<' ';
    for(auto u: z)
        cout<<u<<' ';
    return 0;
}