#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int xp, yp, xv, yv; cin>>xp>>yp>>xv>>yv;
    if(xp + yp <= max(xv, yv) || (xp <= xv && yp <= yv)) cout<<"Polycarp";
    else{
        if(max(xv, yv) < xp + yp) cout<<"Vasiliy";
        else cout<<"Polycarp";
    }
    return 0;
}