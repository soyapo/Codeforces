#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int n, m, cnt = 0; 
    cin>>n>>m;
    if(n >= m)
        return cout<<n - m, 0;
    while(n < m)
        if(!(m % 2)) 
            m /= 2, cnt++;
        else 
            m++, cnt++;
    cout<<cnt + n - m;
    return 0;
}
// 666 6666
